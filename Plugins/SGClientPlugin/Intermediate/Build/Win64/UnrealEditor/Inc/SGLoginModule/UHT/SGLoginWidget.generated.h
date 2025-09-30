// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SGLoginWidget.h"

#ifdef SGLOGINMODULE_SGLoginWidget_generated_h
#error "SGLoginWidget.generated.h already included, missing '#pragma once' in SGLoginWidget.h"
#endif
#define SGLOGINMODULE_SGLoginWidget_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class USGLoginWidget ***********************************************************
#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execQuitServerListButtonCliked); \
	DECLARE_FUNCTION(execLoginButtonCliked); \
	DECLARE_FUNCTION(execMenuSetup);


SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginWidget_NoRegister();

#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSGLoginWidget(); \
	friend struct Z_Construct_UClass_USGLoginWidget_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend SGLOGINMODULE_API UClass* Z_Construct_UClass_USGLoginWidget_NoRegister(); \
public: \
	DECLARE_CLASS2(USGLoginWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SGLoginModule"), Z_Construct_UClass_USGLoginWidget_NoRegister) \
	DECLARE_SERIALIZER(USGLoginWidget)


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USGLoginWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	USGLoginWidget(USGLoginWidget&&) = delete; \
	USGLoginWidget(const USGLoginWidget&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USGLoginWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USGLoginWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USGLoginWidget) \
	NO_API virtual ~USGLoginWidget();


#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_16_PROLOG
#define FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_INCLASS_NO_PURE_DECLS \
	FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class USGLoginWidget;

// ********** End Class USGLoginWidget *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Workspace_ue_test2_Plugins_SGClientPlugin_Source_SGLoginModule_Public_SGLoginWidget_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
