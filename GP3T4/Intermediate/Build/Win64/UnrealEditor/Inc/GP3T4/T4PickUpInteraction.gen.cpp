// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4PickUpInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PickUpInteraction() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4PickUpInteraction_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4PickUpInteraction();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void AT4PickUpInteraction::StaticRegisterNativesAT4PickUpInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4PickUpInteraction);
	UClass* Z_Construct_UClass_AT4PickUpInteraction_NoRegister()
	{
		return AT4PickUpInteraction::StaticClass();
	}
	struct Z_Construct_UClass_AT4PickUpInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlayerForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlayerForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlayerUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlayerUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PickUpInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4PickUpInteraction.h" },
		{ "ModuleRelativePath", "Interactables/T4PickUpInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData[] = {
		{ "Category", "Pick Up" },
		{ "ModuleRelativePath", "Interactables/T4PickUpInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerForward = { "DistanceFromPlayerForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpInteraction, DistanceFromPlayerForward), METADATA_PARAMS(Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData[] = {
		{ "Category", "Pick Up" },
		{ "ModuleRelativePath", "Interactables/T4PickUpInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerUp = { "DistanceFromPlayerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpInteraction, DistanceFromPlayerUp), METADATA_PARAMS(Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PickUpInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpInteraction_Statics::NewProp_DistanceFromPlayerUp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PickUpInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PickUpInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4PickUpInteraction_Statics::ClassParams = {
		&AT4PickUpInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4PickUpInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PickUpInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PickUpInteraction()
	{
		if (!Z_Registration_Info_UClass_AT4PickUpInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4PickUpInteraction.OuterSingleton, Z_Construct_UClass_AT4PickUpInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4PickUpInteraction.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4PickUpInteraction>()
	{
		return AT4PickUpInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PickUpInteraction);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4PickUpInteraction, AT4PickUpInteraction::StaticClass, TEXT("AT4PickUpInteraction"), &Z_Registration_Info_UClass_AT4PickUpInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4PickUpInteraction), 3883411281U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpInteraction_h_239948287(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
