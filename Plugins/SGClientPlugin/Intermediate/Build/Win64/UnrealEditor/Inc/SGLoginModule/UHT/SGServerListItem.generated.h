// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGServerListItem.h"

#ifdef SGLOGINMODULE_SGServerListItem_generated_h
#error "SGServerListItem.generated.h already included, missing '#pragma once' in SGServerListItem.h"
#endif
#define SGLOGINMODULE_SGServerListItem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGServerListItem ********************************************************
SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListItem_NoRegister();

#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGServerListItem(); \
	friend struct Z_Construct_UClass_USGServerListItem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListItem_NoRegister(); \
public: \
	DECLARE_CLASS2(USGServerListItem, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SGLoginModule"), Z_Construct_UClass_USGServerListItem_NoRegister) \
	DECLARE_SERIALIZER(USGServerListItem)


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGServerListItem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGServerListItem(USGServerListItem&&) = delete; \
	USGServerListItem(const USGServerListItem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGServerListItem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGServerListItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGServerListItem) \
	NO_API virtual ~USGServerListItem();


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_13_PROLOG
#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_16_INCLASS_NO_PURE_DECLS \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGServerListItem;

// ********** End Class USGServerListItem **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListItem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
