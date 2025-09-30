#include "SGTypes.h"


DEFINE_LOG_CATEGORY(SGLog);

int SGToolFun::nServerDeltaTime = 0;
int64_t SGToolFun::GetNowMilTimeStamp()
{
	return FDateTime::Now().ToUnixTimestamp() * 1000 + FDateTime::Now().GetMillisecond();
}
int64_t SGToolFun::GetServerNowMilTimeStamp()
{
	return GetNowMilTimeStamp() + nServerDeltaTime;
}