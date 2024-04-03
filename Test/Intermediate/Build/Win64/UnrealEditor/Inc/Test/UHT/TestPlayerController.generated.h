// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/TestPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST_TestPlayerController_generated_h
#error "TestPlayerController.generated.h already included, missing '#pragma once' in TestPlayerController.h"
#endif
#define TEST_TestPlayerController_generated_h

#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_SPARSE_DATA
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_ACCESSORS
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestPlayerController(); \
	friend struct Z_Construct_UClass_ATestPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test"), NO_API) \
	DECLARE_SERIALIZER(ATestPlayerController)


#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATestPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATestPlayerController(ATestPlayerController&&); \
	NO_API ATestPlayerController(const ATestPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATestPlayerController) \
	NO_API virtual ~ATestPlayerController();


#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_15_PROLOG
#define FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_SPARSE_DATA \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_ACCESSORS \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_INCLASS_NO_PURE_DECLS \
	FID_Test_Source_Test_Public_Core_TestPlayerController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST_API UClass* StaticClass<class ATestPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Test_Source_Test_Public_Core_TestPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
