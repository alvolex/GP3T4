// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/AI/T4AIBaseCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AIBaseCharacter() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4AIBaseCharacter_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4AIBaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
// End Cross Module References
	void AT4AIBaseCharacter::StaticRegisterNativesAT4AIBaseCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4AIBaseCharacter);
	UClass* Z_Construct_UClass_AT4AIBaseCharacter_NoRegister()
	{
		return AT4AIBaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AT4AIBaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PawnBehaviorTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnBehaviorTree;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowPoints_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowPoints_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FollowPoints;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4AIBaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIBaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/T4AIBaseCharacter.h" },
		{ "ModuleRelativePath", "AI/T4AIBaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_NewMovementSpeed_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "AI/T4AIBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_NewMovementSpeed = { "NewMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIBaseCharacter, NewMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_NewMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_NewMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_PawnBehaviorTree_MetaData[] = {
		{ "Category", "AI BT Behavior" },
		{ "ModuleRelativePath", "AI/T4AIBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_PawnBehaviorTree = { "PawnBehaviorTree", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIBaseCharacter, PawnBehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_PawnBehaviorTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_PawnBehaviorTree_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints_Inner = { "FollowPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATargetPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints_MetaData[] = {
		{ "Category", "AI BT Behavior" },
		{ "ModuleRelativePath", "AI/T4AIBaseCharacter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints = { "FollowPoints", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIBaseCharacter, FollowPoints), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4AIBaseCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_NewMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_PawnBehaviorTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIBaseCharacter_Statics::NewProp_FollowPoints,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4AIBaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4AIBaseCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4AIBaseCharacter_Statics::ClassParams = {
		&AT4AIBaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4AIBaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIBaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4AIBaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIBaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4AIBaseCharacter()
	{
		if (!Z_Registration_Info_UClass_AT4AIBaseCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4AIBaseCharacter.OuterSingleton, Z_Construct_UClass_AT4AIBaseCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4AIBaseCharacter.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4AIBaseCharacter>()
	{
		return AT4AIBaseCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4AIBaseCharacter);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIBaseCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIBaseCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4AIBaseCharacter, AT4AIBaseCharacter::StaticClass, TEXT("AT4AIBaseCharacter"), &Z_Registration_Info_UClass_AT4AIBaseCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4AIBaseCharacter), 4183425745U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIBaseCharacter_h_620191962(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIBaseCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIBaseCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
