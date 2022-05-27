// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4MeteoriteWeaponInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MeteoriteWeaponInteraction() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4MeteoriteWeaponInteraction_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4MeteoriteWeaponInteraction();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Projectile_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character_NoRegister();
// End Cross Module References
	void AT4MeteoriteWeaponInteraction::StaticRegisterNativesAT4MeteoriteWeaponInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4MeteoriteWeaponInteraction);
	UClass* Z_Construct_UClass_AT4MeteoriteWeaponInteraction_NoRegister()
	{
		return AT4MeteoriteWeaponInteraction::StaticClass();
	}
	struct Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectileClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ProjectileClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerForward = { "DistanceFromPlayerForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteWeaponInteraction, DistanceFromPlayerForward), METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerUp = { "DistanceFromPlayerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteWeaponInteraction, DistanceFromPlayerUp), METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_ProjectileClass_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_ProjectileClass = { "ProjectileClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteWeaponInteraction, ProjectileClass), Z_Construct_UClass_AGP3T4Projectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_ProjectileClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_ProjectileClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_CameraComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteWeaponInteraction, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Interactables/T4MeteoriteWeaponInteraction.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteWeaponInteraction, PlayerCharacter), Z_Construct_UClass_AGP3T4Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_PlayerCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_DistanceFromPlayerUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_ProjectileClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::NewProp_PlayerCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4MeteoriteWeaponInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::ClassParams = {
		&AT4MeteoriteWeaponInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4MeteoriteWeaponInteraction()
	{
		if (!Z_Registration_Info_UClass_AT4MeteoriteWeaponInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4MeteoriteWeaponInteraction.OuterSingleton, Z_Construct_UClass_AT4MeteoriteWeaponInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4MeteoriteWeaponInteraction.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4MeteoriteWeaponInteraction>()
	{
		return AT4MeteoriteWeaponInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4MeteoriteWeaponInteraction);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteWeaponInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteWeaponInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4MeteoriteWeaponInteraction, AT4MeteoriteWeaponInteraction::StaticClass, TEXT("AT4MeteoriteWeaponInteraction"), &Z_Registration_Info_UClass_AT4MeteoriteWeaponInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4MeteoriteWeaponInteraction), 1623526559U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteWeaponInteraction_h_2242258416(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteWeaponInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteWeaponInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
