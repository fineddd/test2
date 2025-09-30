// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGLoginBlueprintFunctionLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGLoginBlueprintFunctionLibrary() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginBlueprintFunctionLibrary();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_SGLoginModule();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGLoginBlueprintFunctionLibrary Function LoginLevelInit *****************
struct Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SGLoginBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_USGLoginBlueprintFunctionLibrary, nullptr, "LoginLevelInit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit_Statics::Function_MetaDataParams), Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USGLoginBlueprintFunctionLibrary::execLoginLevelInit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USGLoginBlueprintFunctionLibrary::LoginLevelInit();
	P_NATIVE_END;
}
// ********** End Class USGLoginBlueprintFunctionLibrary Function LoginLevelInit *******************

// ********** Begin Class USGLoginBlueprintFunctionLibrary *****************************************
void USGLoginBlueprintFunctionLibrary::StaticRegisterNativesUSGLoginBlueprintFunctionLibrary()
{
	UClass* Class = USGLoginBlueprintFunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "LoginLevelInit", &USGLoginBlueprintFunctionLibrary::execLoginLevelInit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary;
UClass* USGLoginBlueprintFunctionLibrary::GetPrivateStaticClass()
{
	using TClass = USGLoginBlueprintFunctionLibrary;
	if (!Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGLoginBlueprintFunctionLibrary"),
			Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.InnerSingleton,
			StaticRegisterNativesUSGLoginBlueprintFunctionLibrary,
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
	return Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_NoRegister()
{
	return USGLoginBlueprintFunctionLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SGLoginBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SGLoginBlueprintFunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USGLoginBlueprintFunctionLibrary_LoginLevelInit, "LoginLevelInit" }, // 1070616850
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGLoginBlueprintFunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SGLoginModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::ClassParams = {
	&USGLoginBlueprintFunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGLoginBlueprintFunctionLibrary()
{
	if (!Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USGLoginBlueprintFunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary.OuterSingleton;
}
USGLoginBlueprintFunctionLibrary::USGLoginBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGLoginBlueprintFunctionLibrary);
USGLoginBlueprintFunctionLibrary::~USGLoginBlueprintFunctionLibrary() {}
// ********** End Class USGLoginBlueprintFunctionLibrary *******************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginBlueprintFunctionLibrary_h__Script_SGLoginModule_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGLoginBlueprintFunctionLibrary, USGLoginBlueprintFunctionLibrary::StaticClass, TEXT("USGLoginBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USGLoginBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGLoginBlueprintFunctionLibrary), 1008496434U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginBlueprintFunctionLibrary_h__Script_SGLoginModule_208243694(TEXT("/Script/SGLoginModule"),
	Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginBlueprintFunctionLibrary_h__Script_SGLoginModule_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginBlueprintFunctionLibrary_h__Script_SGLoginModule_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
