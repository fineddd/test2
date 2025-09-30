// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGServerListEntry.h"

#ifdef SGLOGINMODULE_SGServerListEntry_generated_h
#error "SGServerListEntry.generated.h already included, missing '#pragma once' in SGServerListEntry.h"
#endif
#define SGLOGINMODULE_SGServerListEntry_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGServerListEntry *******************************************************
#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execButtonServer2Cliked); \
	DECLARE_FUNCTION(execButtonServer1Cliked);


SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListEntry_NoRegister();

#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGServerListEntry(); \
	friend struct Z_Construct_UClass_USGServerListEntry_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SGLOGINMODULE_API UClass* Z_Construct_UClass_USGServerListEntry_NoRegister(); \
public: \
	DECLARE_CLASS2(USGServerListEntry, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SGLoginModule"), Z_Construct_UClass_USGServerListEntry_NoRegister) \
	DECLARE_SERIALIZER(USGServerListEntry) \
	virtual UObject* _getUObject() const override { return const_cast<USGServerListEntry*>(this); }


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGServerListEntry(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGServerListEntry(USGServerListEntry&&) = delete; \
	USGServerListEntry(const USGServerListEntry&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGServerListEntry); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGServerListEntry); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGServerListEntry) \
	NO_API virtual ~USGServerListEntry();


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_13_PROLOG
#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_INCLASS_NO_PURE_DECLS \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGServerListEntry;

// ********** End Class USGServerListEntry *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGServerListEntry_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
