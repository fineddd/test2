#include "SGTCPClient.h"

//#include "SGMsgBase.pb.h"
//#include "MsgID.pb.h"
#include "SGMsgHandler.h"

#include "SGMsgCrypto.h"
//#include "SGMsgOther.pb.h"
#include "SGTypes.h"

#include "Interfaces/IPv4/IPv4Endpoint.h"  
#include "Sockets.h"  
#include "SocketSubsystem.h" 
#include "IPAddressAsyncResolve.h"

#define HEARTBEAT_TIMEOUT_MILSECS 25 * 1000
#define HEARTBEAT_SEND_TIME 10 * 1000

void SGTCPClient::Init()
{
    
}

void SGTCPClient::Process()
{
    if (m_bDestroyed)
    {
        Close(SGSCR_ActiveClose);
        delete this;
        return;
    }
    if (!Valid())
    {
        return;
    }
    //recive msg
    ReceiveMsg();
    //heartbeat
    auto nNowTime = SGToolFun::GetNowMilTimeStamp();
    if (nNowTime > m_pMsgReader->GetLastReciveHeartbeatTime() + HEARTBEAT_TIMEOUT_MILSECS)
    {
        Close(SGSCR_HeartbeatTimeout);
        return;
    }
    if (nNowTime > m_nLastSendHeartbeatTime + HEARTBEAT_SEND_TIME)
    {
        SendHeartbeat(nNowTime);
    }
}

void SGTCPClient::Close(int nCloseReasn)
{
    if (m_pSocket != nullptr)
    {
        m_pSocket->Close();
        ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->DestroySocket(m_pSocket);
        //todo close event
        m_pSocket = nullptr;

		GEngine->AddOnScreenDebugMessage(
			-1,
			15.f,
			FColor::Red,
			FString::Printf(TEXT("socket close by reason: %d !"), nCloseReasn)
		);
    }
    m_strConnectIP = TEXT("");
    m_nConnectPort = 0;
    m_nUserdata = 0;
    m_pMsgReader->Reset();
    m_pSendMsgheader->Reset();
}

bool SGTCPClient::Valid()
{
    return m_pSocket != nullptr;
}

void SGTCPClient::Destroy()
{
    m_bDestroyed = true;
}

bool SGTCPClient::ConnectTo(const FString& addr, uint16 port)
{
    Close(SGSCR_NewConnectClose);

    FIPv4Address ip;
    uint32 OutIP = 0;

    if (!FIPv4Address::Parse(addr, ip))
    {
        auto resolveInfo = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->GetHostByName(TCHAR_TO_ANSI(*addr));
        while (!resolveInfo->IsComplete());

        if (resolveInfo->GetErrorCode() != 0)
        {
            UE_LOG(SGLog, Error, TEXT("tcp connect to get resolveinfo error %s, code=%d"), *addr, resolveInfo->GetErrorCode());
            return false;
        }

        resolveInfo->GetResolvedAddress().GetIp(OutIP);
    }
    else
    {
        OutIP = ip.Value;
    }


    TSharedRef<FInternetAddr> internetAddr = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
    internetAddr->SetIp(OutIP);
    internetAddr->SetPort(port);

    m_pSocket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);
    if (m_pSocket == nullptr)
    {
        return false;
    }
    if (!m_pSocket->SetNonBlocking(true))
    {
        UE_LOG(SGLog, Warning, TEXT("socket no blocking error"));
    }
    if (!Connect(*internetAddr))
    {
		GEngine->AddOnScreenDebugMessage(
			-1,
			15.f,
			FColor::Red,
			FString::Printf(TEXT("connect failed %s:%d !"), *addr, port)
		);
        return false;
    }
    //todo connect event
    m_strConnectIP = addr;
    m_nConnectPort = port;

    m_nLastSendHeartbeatTime = SGToolFun::GetNowMilTimeStamp();
    m_pMsgReader->SetLastReciveHeartbeatTime(m_nLastSendHeartbeatTime);

    GEngine->AddOnScreenDebugMessage(
        -1,
        15.f,
        FColor::Blue,
        FString::Printf(TEXT("connect success %s:%d !"), *addr, port)
    );
    return true;
}

bool SGTCPClient::Send(int nMsgID, std::string& strMsg)
{
    if (m_pSocket == nullptr)
    {
        UE_LOG(SGLog, Error, TEXT("socket null %d"), nMsgID);
        return false;
    }
    std::string* pMsgData = &strMsg;
    std::string strEncryptoData;
	if (m_pEnCrypto != nullptr)
	{
        strEncryptoData = m_pEnCrypto->Encrypt(strMsg);
        pMsgData = &strEncryptoData;
	}

    //todo sgmsg packeter
    m_pSendMsgheader->m_cSerial += 1;
    m_pSendMsgheader->m_nMsgID = nMsgID;
    m_pSendMsgheader->m_uiSize = pMsgData->size() + m_pSendMsgheader->GetHeadLength();
    m_pSendMsgheader->mCrcCode = GetCrc32(*pMsgData);
    //packet header
    m_pMsgSendBuffer->Reset();
    m_pSendMsgheader->EnCode(m_pMsgSendBuffer->GetHead());
    m_pMsgSendBuffer->MoveTail(m_pSendMsgheader->GetHeadLength());

    m_pMsgSendBuffer->Append((const uint8*)pMsgData->c_str(), pMsgData->size());

    //
    int32 sent = 0;
    //todo 发送失败处理
    return m_pSocket->Send(m_pMsgSendBuffer->GetHead(), m_pMsgSendBuffer->GetSize(), sent);
}
bool SGTCPClient::Send(int nMsgID, google::protobuf::Message& xMsg)
{
	std::string strMsg;
	if (!xMsg.SerializePartialToString(&strMsg))
	{
		UE_LOG(SGLog, Error, TEXT("proto to string error,"), nMsgID);
		return false;
	}
	return Send(nMsgID, strMsg);
}
void SGTCPClient::SetCrypto(bool bEncrypto)
{
    if (bEncrypto)
    {
		//暂时默认使用这种，可以改成配置或参数
		auto pEnCrypto = MakeShared<SGCSimpleEncrypt>();
        std::string strKey = "1234567890123456";
		pEnCrypto->InitKey((unsigned char*)strKey.c_str(), strKey.size());
		m_pEnCrypto = pEnCrypto;
    }
    else
    {
        m_pEnCrypto = nullptr;
    }
}

bool SGTCPClient::Connect(const FInternetAddr& addr)
{
    return m_pSocket->Connect(addr);
}

void SGTCPClient::ReceiveMsg()
{
    //if (m_pMsgReader == nullptr)
    //{
    //  m_pMsgReader = MakeShared<SGMsgReader>();
    //}
    uint32 DataSize = 0;
    m_pSocket->HasPendingData(DataSize);
    while (DataSize > 0 && (m_pMsgReader->GetPendingReciveDataLength() <= 0
        || DataSize >= (uint32)m_pMsgReader->GetPendingReciveDataLength()))
    {
        m_pMsgReciveBuffer->Reset();
        m_pMsgReciveBuffer->Reserve(FMath::Min(DataSize, 65507u));
        int32 BytesRead = 0;
        if (m_pSocket->Recv(m_pMsgReciveBuffer->GetTail(), m_pMsgReciveBuffer->GetFreeSize(), BytesRead))
        {
            m_pMsgReciveBuffer->MoveTail(BytesRead);
            if (!m_pMsgReader->Process(m_pMsgReciveBuffer->GetHead(), BytesRead))
            {
                Close(SGSCR_MsgDataError);
                UE_LOG(SGLog, Error, TEXT("process buffer data error, net close"));
                return;
            }
        }
        DataSize = DataSize - BytesRead;
    }
}
void SGTCPClient::SendHeartbeat(int64_t nNow)
{
	//SGMsg::ReqHeartBeat xMsg;
	//xMsg.set_attached(1);
	//Send(MsgID::MSG_REQ_HEART_BEAT, xMsg);

    m_nLastSendHeartbeatTime = nNow;
    m_pMsgReader->SetHeartbeatTime(nNow);
}