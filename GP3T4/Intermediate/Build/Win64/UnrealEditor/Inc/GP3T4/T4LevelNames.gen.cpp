// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Levels/T4LevelNames.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4LevelNames() {}
// Cross Module References
	GP3T4_API UEnum* Z_Construct_UEnum_GP3T4_ELevelNames();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELevelNames;
	static UEnum* ELevelNames_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELevelNames.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELevelNames.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GP3T4_ELevelNames, Z_Construct_UPackage__Script_GP3T4(), TEXT("ELevelNames"));
		}
		return Z_Registration_Info_UEnum_ELevelNames.OuterSingleton;
	}
	template<> GP3T4_API UEnum* StaticEnum<ELevelNames>()
	{
		return ELevelNames_StaticEnum();
	}
	struct Z_Construct_UEnum_GP3T4_ELevelNames_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enumerators[] = {
		{ "ELevelNames::ELN_Bedroom", (int64)ELevelNames::ELN_Bedroom },
		{ "ELevelNames::ELN_Level1", (int64)ELevelNames::ELN_Level1 },
		{ "ELevelNames::ELN_Level2", (int64)ELevelNames::ELN_Level2 },
		{ "ELevelNames::ELN_MAX", (int64)ELevelNames::ELN_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ELN_Bedroom.DisplayName", "Bedroom" },
		{ "ELN_Bedroom.Name", "ELevelNames::ELN_Bedroom" },
		{ "ELN_Level1.DisplayName", "Level1" },
		{ "ELN_Level1.Name", "ELevelNames::ELN_Level1" },
		{ "ELN_Level2.DisplayName", "Level2" },
		{ "ELN_Level2.Name", "ELevelNames::ELN_Level2" },
		{ "ELN_MAX.DisplayName", "MaxLevels" },
		{ "ELN_MAX.Name", "ELevelNames::ELN_MAX" },
		{ "ModuleRelativePath", "Levels/T4LevelNames.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GP3T4_ELevelNames_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GP3T4,
		nullptr,
		"ELevelNames",
		"ELevelNames",
		Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_ELevelNames_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GP3T4_ELevelNames()
	{
		if (!Z_Registration_Info_UEnum_ELevelNames.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELevelNames.InnerSingleton, Z_Construct_UEnum_GP3T4_ELevelNames_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELevelNames.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LevelNames_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LevelNames_h_Statics::EnumInfo[] = {
		{ ELevelNames_StaticEnum, TEXT("ELevelNames"), &Z_Registration_Info_UEnum_ELevelNames, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2204705288U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LevelNames_h_225405472(TEXT("/Script/GP3T4"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LevelNames_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LevelNames_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
