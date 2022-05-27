// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/GP3T4GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3T4GameMode() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4GameMode_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void AGP3T4GameMode::StaticRegisterNativesAGP3T4GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGP3T4GameMode);
	UClass* Z_Construct_UClass_AGP3T4GameMode_NoRegister()
	{
		return AGP3T4GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AGP3T4GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3T4GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GP3T4GameMode.h" },
		{ "ModuleRelativePath", "GP3T4GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3T4GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3T4GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGP3T4GameMode_Statics::ClassParams = {
		&AGP3T4GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGP3T4GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3T4GameMode()
	{
		if (!Z_Registration_Info_UClass_AGP3T4GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGP3T4GameMode.OuterSingleton, Z_Construct_UClass_AGP3T4GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGP3T4GameMode.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AGP3T4GameMode>()
	{
		return AGP3T4GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3T4GameMode);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGP3T4GameMode, AGP3T4GameMode::StaticClass, TEXT("AGP3T4GameMode"), &Z_Registration_Info_UClass_AGP3T4GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGP3T4GameMode), 3879160109U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4GameMode_h_3816321746(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
