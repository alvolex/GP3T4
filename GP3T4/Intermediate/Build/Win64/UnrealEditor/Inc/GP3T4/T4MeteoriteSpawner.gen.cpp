// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4MeteoriteSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MeteoriteSpawner() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4MeteoriteSpawner_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4MeteoriteSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3T4_API UClass* Z_Construct_UClass_AT4Meteorite_NoRegister();
// End Cross Module References
	void AT4MeteoriteSpawner::StaticRegisterNativesAT4MeteoriteSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4MeteoriteSpawner);
	UClass* Z_Construct_UClass_AT4MeteoriteSpawner_NoRegister()
	{
		return AT4MeteoriteSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AT4MeteoriteSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ClassToSpawn_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ClassToSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumberOfAgents_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfAgents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRangeMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRangeMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRangeMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SpawnRangeMax;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Agents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Agents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Agents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4MeteoriteSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4MeteoriteSpawner.h" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_ClassToSpawn_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_ClassToSpawn = { "ClassToSpawn", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteSpawner, ClassToSpawn), Z_Construct_UClass_AT4Meteorite_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_ClassToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_ClassToSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_NumberOfAgents_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_NumberOfAgents = { "NumberOfAgents", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteSpawner, NumberOfAgents), METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_NumberOfAgents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_NumberOfAgents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMin_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMin = { "SpawnRangeMin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteSpawner, SpawnRangeMin), METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMax_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMax = { "SpawnRangeMax", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteSpawner, SpawnRangeMax), METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMax_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents_Inner = { "Agents", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AT4Meteorite_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4MeteoriteSpawner.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents = { "Agents", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MeteoriteSpawner, Agents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4MeteoriteSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_ClassToSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_NumberOfAgents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_SpawnRangeMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MeteoriteSpawner_Statics::NewProp_Agents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4MeteoriteSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4MeteoriteSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4MeteoriteSpawner_Statics::ClassParams = {
		&AT4MeteoriteSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4MeteoriteSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MeteoriteSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4MeteoriteSpawner()
	{
		if (!Z_Registration_Info_UClass_AT4MeteoriteSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4MeteoriteSpawner.OuterSingleton, Z_Construct_UClass_AT4MeteoriteSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4MeteoriteSpawner.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4MeteoriteSpawner>()
	{
		return AT4MeteoriteSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4MeteoriteSpawner);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4MeteoriteSpawner, AT4MeteoriteSpawner::StaticClass, TEXT("AT4MeteoriteSpawner"), &Z_Registration_Info_UClass_AT4MeteoriteSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4MeteoriteSpawner), 387026644U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteSpawner_h_1895943513(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4MeteoriteSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
