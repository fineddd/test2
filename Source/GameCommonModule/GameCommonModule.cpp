// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameCommonModule.h"
#include "Kismet/GameplayStatics.h"  
#include "SGCoreApp.h"

void FGameCommonModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	SGCoreApp::GetInstance()->RegLoginFinishDelegate(this, &FGameCommonModule::LoginFinishLevelSwitch);
}

void FGameCommonModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.
}

void FGameCommonModule::LoginFinishLevelSwitch()
{
	//如果需要异步加载（带加载界面），可使用
	//UGameplayStatics::LoadStreamLevel 或 ULevelStreamingDynamic
	auto pCurWorld = GEngine->GetCurrentPlayWorld();
	UGameplayStatics::OpenLevel(pCurWorld, "/Game/Level/GameLevel.GameLevel");
	GEngine->AddOnScreenDebugMessage(
		-1,
		15.f,
		FColor::Red,
		FString(TEXT("change level game level !"))
	);
	return;
}

IMPLEMENT_MODULE(FGameCommonModule, GameCommonModule)