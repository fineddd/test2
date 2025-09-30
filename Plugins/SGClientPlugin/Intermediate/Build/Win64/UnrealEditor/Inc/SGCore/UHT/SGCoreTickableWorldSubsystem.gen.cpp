// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGCoreTickableWorldSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGCoreTickableWorldSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
SGCORE_API UClass* Z_Construct_UClass_USGCoreTickableWorldSubsystem();
SGCORE_API UClass* Z_Construct_UClass_USGCoreTickableWorldSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SGCore();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGCoreTickableWorldSubsystem ********************************************
void USGCoreTickableWorldSubsystem::StaticRegisterNativesUSGCoreTickableWorldSubsystem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem;
UClass* USGCoreTickableWorldSubsystem::GetPrivateStaticClass()
{
	using TClass = USGCoreTickableWorldSubsystem;
	if (!Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGCoreTickableWorldSubsystem"),
			Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.InnerSingleton,
			StaticRegisterNativesUSGCoreTickableWorldSubsystem,
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
	return Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_USGCoreTickableWorldSubsystem_NoRegister()
{
	return USGCoreTickableWorldSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SGCoreTickableWorldSubsystem.h" },
		{ "ModuleRelativePath", "Public/SGCoreTickableWorldSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGCoreTickableWorldSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SGCore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::ClassParams = {
	&USGCoreTickableWorldSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGCoreTickableWorldSubsystem()
{
	if (!Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.OuterSingleton, Z_Construct_UClass_USGCoreTickableWorldSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem.OuterSingleton;
}
USGCoreTickableWorldSubsystem::USGCoreTickableWorldSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGCoreTickableWorldSubsystem);
USGCoreTickableWorldSubsystem::~USGCoreTickableWorldSubsystem() {}
// ********** End Class USGCoreTickableWorldSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGCore_Public_SGCoreTickableWorldSubsystem_h__Script_SGCore_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGCoreTickableWorldSubsystem, USGCoreTickableWorldSubsystem::StaticClass, TEXT("USGCoreTickableWorldSubsystem"), &Z_Registration_Info_UClass_USGCoreTickableWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGCoreTickableWorldSubsystem), 2914002731U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGCore_Public_SGCoreTickableWorldSubsystem_h__Script_SGCore_1100160875(TEXT("/Script/SGCore"),
	Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGCore_Public_SGCoreTickableWorldSubsystem_h__Script_SGCore_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGCore_Public_SGCoreTickableWorldSubsystem_h__Script_SGCore_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
