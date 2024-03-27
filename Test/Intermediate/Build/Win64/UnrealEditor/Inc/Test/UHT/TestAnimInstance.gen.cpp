// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/TestAnimInstance.h"
#include "../../Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestAnimInstance() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	TEST_API UClass* Z_Construct_UClass_UTestAnimInstance();
	TEST_API UClass* Z_Construct_UClass_UTestAnimInstance_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Test();
// End Cross Module References
	void UTestAnimInstance::StaticRegisterNativesUTestAnimInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestAnimInstance);
	UClass* Z_Construct_UClass_UTestAnimInstance_NoRegister()
	{
		return UTestAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UTestAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Test,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAnimInstance_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestAnimInstance_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "Core/TestAnimInstance.h" },
		{ "ModuleRelativePath", "Public/Core/TestAnimInstance.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAnimInstance_Statics::ClassParams = {
		&UTestAnimInstance::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAnimInstance_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UTestAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UTestAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAnimInstance.OuterSingleton, Z_Construct_UClass_UTestAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTestAnimInstance.OuterSingleton;
	}
	template<> TEST_API UClass* StaticClass<UTestAnimInstance>()
	{
		return UTestAnimInstance::StaticClass();
	}
	UTestAnimInstance::UTestAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestAnimInstance);
	UTestAnimInstance::~UTestAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestAnimInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTestAnimInstance, UTestAnimInstance::StaticClass, TEXT("UTestAnimInstance"), &Z_Registration_Info_UClass_UTestAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAnimInstance), 581067482U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestAnimInstance_h_1817385589(TEXT("/Script/Test"),
		Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Test_Source_Test_Public_Core_TestAnimInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
