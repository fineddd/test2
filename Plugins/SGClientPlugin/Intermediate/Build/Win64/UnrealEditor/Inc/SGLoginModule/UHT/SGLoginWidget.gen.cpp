// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGLoginWidget.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGLoginWidget() {}

// ********** Begin Cross Module References ********************************************************
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginWidget();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
UMG_API UClass* Z_Construct_UClass_UEditableText_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UListView_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
UPackage* Z_Construct_UPackage__Script_SGLoginModule();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGLoginWidget Function LoginButtonCliked ********************************
struct Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGLoginWidget, nullptr, "LoginButtonCliked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGLoginWidget::execLoginButtonCliked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoginButtonCliked();
	P_NATIVE_END;
}
// ********** End Class USGLoginWidget Function LoginButtonCliked **********************************

// ********** Begin Class USGLoginWidget Function MenuSetup ****************************************
struct Z_Construct_UFunction_USGLoginWidget_MenuSetup_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGLoginWidget_MenuSetup_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGLoginWidget, nullptr, "MenuSetup", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGLoginWidget_MenuSetup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGLoginWidget_MenuSetup_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGLoginWidget_MenuSetup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGLoginWidget_MenuSetup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGLoginWidget::execMenuSetup)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MenuSetup();
	P_NATIVE_END;
}
// ********** End Class USGLoginWidget Function MenuSetup ******************************************

// ********** Begin Class USGLoginWidget Function QuitServerListButtonCliked ***********************
struct Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGLoginWidget, nullptr, "QuitServerListButtonCliked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGLoginWidget::execQuitServerListButtonCliked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->QuitServerListButtonCliked();
	P_NATIVE_END;
}
// ********** End Class USGLoginWidget Function QuitServerListButtonCliked *************************

// ********** Begin Class USGLoginWidget ***********************************************************
void USGLoginWidget::StaticRegisterNativesUSGLoginWidget()
{
	UClass* Class = USGLoginWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoginButtonCliked", &USGLoginWidget::execLoginButtonCliked },
		{ "MenuSetup", &USGLoginWidget::execMenuSetup },
		{ "QuitServerListButtonCliked", &USGLoginWidget::execQuitServerListButtonCliked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGLoginWidget;
UClass* USGLoginWidget::GetPrivateStaticClass()
{
	using TClass = USGLoginWidget;
	if (!Z_Registration_Info_UClass_USGLoginWidget.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGLoginWidget"),
			Z_Registration_Info_UClass_USGLoginWidget.InnerSingleton,
			StaticRegisterNativesUSGLoginWidget,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_USGLoginWidget.InnerSingleton;
}
UClass* Z_Construct_UClass_USGLoginWidget_NoRegister()
{
	return USGLoginWidget::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGLoginWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SGLoginWidget.h" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginButton_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//login\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "login" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EditAreaBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoginBgImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConfigAddrInputText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIDInputText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CanvasPanelServerList_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//server list\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "server list" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonQuitServerList_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ListViewServer_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGLoginWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoginButton;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EditAreaBox;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoginBgImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConfigAddrInputText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerIDInputText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CanvasPanelServerList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonQuitServerList;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ListViewServer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGLoginWidget_LoginButtonCliked, "LoginButtonCliked" }, // 1652975252
		{ &Z_Construct_UFunction_USGLoginWidget_MenuSetup, "MenuSetup" }, // 1957469943
		{ &Z_Construct_UFunction_USGLoginWidget_QuitServerListButtonCliked, "QuitServerListButtonCliked" }, // 2393504997
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGLoginWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_LoginButton = { "LoginButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, LoginButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginButton_MetaData), NewProp_LoginButton_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_EditAreaBox = { "EditAreaBox", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, EditAreaBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EditAreaBox_MetaData), NewProp_EditAreaBox_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_LoginBgImage = { "LoginBgImage", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, LoginBgImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoginBgImage_MetaData), NewProp_LoginBgImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ConfigAddrInputText = { "ConfigAddrInputText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, ConfigAddrInputText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConfigAddrInputText_MetaData), NewProp_ConfigAddrInputText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_PlayerIDInputText = { "PlayerIDInputText", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, PlayerIDInputText), Z_Construct_UClass_UEditableText_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerIDInputText_MetaData), NewProp_PlayerIDInputText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_CanvasPanelServerList = { "CanvasPanelServerList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, CanvasPanelServerList), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CanvasPanelServerList_MetaData), NewProp_CanvasPanelServerList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ButtonQuitServerList = { "ButtonQuitServerList", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, ButtonQuitServerList), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonQuitServerList_MetaData), NewProp_ButtonQuitServerList_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ListViewServer = { "ListViewServer", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGLoginWidget, ListViewServer), Z_Construct_UClass_UListView_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ListViewServer_MetaData), NewProp_ListViewServer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGLoginWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_LoginButton,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_EditAreaBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_LoginBgImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ConfigAddrInputText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_PlayerIDInputText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_CanvasPanelServerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ButtonQuitServerList,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGLoginWidget_Statics::NewProp_ListViewServer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGLoginWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SGLoginModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGLoginWidget_Statics::ClassParams = {
	&USGLoginWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGLoginWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_USGLoginWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGLoginWidget()
{
	if (!Z_Registration_Info_UClass_USGLoginWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGLoginWidget.OuterSingleton, Z_Construct_UClass_USGLoginWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGLoginWidget.OuterSingleton;
}
USGLoginWidget::USGLoginWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGLoginWidget);
USGLoginWidget::~USGLoginWidget() {}
// ********** End Class USGLoginWidget *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h__Script_SGLoginModule_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGLoginWidget, USGLoginWidget::StaticClass, TEXT("USGLoginWidget"), &Z_Registration_Info_UClass_USGLoginWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGLoginWidget), 642357809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h__Script_SGLoginModule_3106631445(TEXT("/Script/SGLoginModule"),
	Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h__Script_SGLoginModule_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h__Script_SGLoginModule_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
