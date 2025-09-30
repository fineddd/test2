// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SGServerListItem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeSGServerListItem() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListItem();
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListItem_NoRegister();
UPackage* Z_Construct_UPackage__Script_SGLoginModule();
// ********** End Cross Module References **********************************************************

// ********** Begin Class USGServerListItem ********************************************************
void USGServerListItem::StaticRegisterNativesUSGServerListItem()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_USGServerListItem;
UClass* USGServerListItem::GetPrivateStaticClass()
{
	using TClass = USGServerListItem;
	if (!Z_Registration_Info_UClass_USGServerListItem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("SGServerListItem"),
			Z_Registration_Info_UClass_USGServerListItem.InnerSingleton,
			StaticRegisterNativesUSGServerListItem,
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
	return Z_Registration_Info_UClass_USGServerListItem.InnerSingleton;
}
UClass* Z_Construct_UClass_USGServerListItem_NoRegister()
{
	return USGServerListItem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_USGServerListItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "SGServerListItem.h" },
		{ "ModuleRelativePath", "Public/SGServerListItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USGServerListItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USGServerListItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_SGLoginModule,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USGServerListItem_Statics::ClassParams = {
	&USGServerListItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USGServerListItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USGServerListItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USGServerListItem()
{
	if (!Z_Registration_Info_UClass_USGServerListItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USGServerListItem.OuterSingleton, Z_Construct_UClass_USGServerListItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USGServerListItem.OuterSingleton;
}
USGServerListItem::USGServerListItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USGServerListItem);
USGServerListItem::~USGServerListItem() {}
// ********** End Class USGServerListItem **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h__Script_SGLoginModule_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USGServerListItem, USGServerListItem::StaticClass, TEXT("USGServerListItem"), &Z_Registration_Info_UClass_USGServerListItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USGServerListItem), 3485037008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h__Script_SGLoginModule_2240089545(TEXT("/Script/SGLoginModule"),
	Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h__Script_SGLoginModule_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h__Script_SGLoginModule_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
