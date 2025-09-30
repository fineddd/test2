// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGServerListEntry.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGServerListEntry() {}

// ********** Begin Cross Module References ********************************************************
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListEntry();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserObjectListEntry_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_SGLoginModule();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGServerListEntry Function ButtonServer1Cliked **************************
struct Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGServerListEntry, nullptr, "ButtonServer1Cliked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGServerListEntry::execButtonServer1Cliked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ButtonServer1Cliked();
	P_NATIVE_END;
}
// ********** End Class USGServerListEntry Function ButtonServer1Cliked ****************************

// ********** Begin Class USGServerListEntry Function ButtonServer2Cliked **************************
struct Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGServerListEntry, nullptr, "ButtonServer2Cliked", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGServerListEntry::execButtonServer2Cliked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ButtonServer2Cliked();
	P_NATIVE_END;
}
// ********** End Class USGServerListEntry Function ButtonServer2Cliked ****************************

// ********** Begin Class USGServerListEntry *******************************************************
void USGServerListEntry::StaticRegisterNativesUSGServerListEntry()
{
	UClass* Class = USGServerListEntry::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ButtonServer1Cliked", &USGServerListEntry::execButtonServer1Cliked },
		{ "ButtonServer2Cliked", &USGServerListEntry::execButtonServer2Cliked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGServerListEntry;
UClass* USGServerListEntry::GetPrivateStaticClass()
{
	using TClass = USGServerListEntry;
	if (!Z_Registration_Info_UClass_USGServerListEntry.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGServerListEntry"),
			Z_Registration_Info_UClass_USGServerListEntry.InnerSingleton,
			StaticRegisterNativesUSGServerListEntry,
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
	return Z_Registration_Info_UClass_USGServerListEntry.InnerSingleton;
}
UClass* Z_Construct_UClass_USGServerListEntry_NoRegister()
{
	return USGServerListEntry::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGServerListEntry_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SGServerListEntry.h" },
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonServer1_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonServer2_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonServer1Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ButtonServer2Text_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SGServerListEntry.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonServer1;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonServer2;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonServer1Text;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ButtonServer2Text;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGServerListEntry_ButtonServer1Cliked, "ButtonServer1Cliked" }, // 2636057666
		{ &Z_Construct_UFunction_USGServerListEntry_ButtonServer2Cliked, "ButtonServer2Cliked" }, // 1024078484
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGServerListEntry>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer1 = { "ButtonServer1", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGServerListEntry, ButtonServer1), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonServer1_MetaData), NewProp_ButtonServer1_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer2 = { "ButtonServer2", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGServerListEntry, ButtonServer2), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonServer2_MetaData), NewProp_ButtonServer2_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer1Text = { "ButtonServer1Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGServerListEntry, ButtonServer1Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonServer1Text_MetaData), NewProp_ButtonServer1Text_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer2Text = { "ButtonServer2Text", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USGServerListEntry, ButtonServer2Text), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ButtonServer2Text_MetaData), NewProp_ButtonServer2Text_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USGServerListEntry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer1Text,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USGServerListEntry_Statics::NewProp_ButtonServer2Text,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListEntry_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USGServerListEntry_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_SGLoginModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListEntry_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USGServerListEntry_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UUserObjectListEntry_NoRegister, (int32)VTABLE_OFFSET(USGServerListEntry, IUserObjectListEntry), false },  // 1900202470
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGServerListEntry_Statics::ClassParams = {
	&USGServerListEntry::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USGServerListEntry_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListEntry_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListEntry_Statics::Class_MetaDataParams), Z_Construct_UClass_USGServerListEntry_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGServerListEntry()
{
	if (!Z_Registration_Info_UClass_USGServerListEntry.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGServerListEntry.OuterSingleton, Z_Construct_UClass_USGServerListEntry_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGServerListEntry.OuterSingleton;
}
USGServerListEntry::USGServerListEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGServerListEntry);
USGServerListEntry::~USGServerListEntry() {}
// ********** End Class USGServerListEntry *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h__Script_SGLoginModule_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGServerListEntry, USGServerListEntry::StaticClass, TEXT("USGServerListEntry"), &Z_Registration_Info_UClass_USGServerListEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGServerListEntry), 3047951871U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h__Script_SGLoginModule_3691163022(TEXT("/Script/SGLoginModule"),
	Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h__Script_SGLoginModule_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h__Script_SGLoginModule_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
