// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Test/Public/Core/TestCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestCharacter() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	TEST_API UClass* Z_Construct_UClass_ATestCharacter();
	TEST_API UClass* Z_Construct_UClass_ATestCharacter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void ATestCharacter::StaticRegisterNativesATestCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATestCharacter);
	UClass* Z_Construct_UClass_ATestCharacter_NoRegister()
	{
		return ATestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ATestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Core/TestCharacter.h" },
		{ "ModuleRelativePath", "Public/Core/TestCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATestCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATestCharacter_Statics::ClassParams = {
		&ATestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATestCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ATestCharacter()
	{
		if (!Z_Registration_Info_UClass_ATestCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATestCharacter.OuterSingleton, Z_Construct_UClass_ATestCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATestCharacter.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<ATestCharacter>()
	{
		return ATestCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATestCharacter);
	ATestCharacter::~ATestCharacter() {}
	struct Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATestCharacter, ATestCharacter::StaticClass, TEXT("ATestCharacter"), &Z_Registration_Info_UClass_ATestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATestCharacter), 3322335436U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestCharacter_h_2926470537(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
