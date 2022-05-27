// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Enums/PlayerCondition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCondition() {}
// Cross Module References
	GP3T4_API UEnum* Z_Construct_UEnum_GP3T4_EPlayerCondition();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPlayerCondition;
	static UEnum* EPlayerCondition_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPlayerCondition.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPlayerCondition.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GP3T4_EPlayerCondition, Z_Construct_UPackage__Script_GP3T4(), TEXT("EPlayerCondition"));
		}
		return Z_Registration_Info_UEnum_EPlayerCondition.OuterSingleton;
	}
	template<> GP3T4_API UEnum* StaticEnum<EPlayerCondition>()
	{
		return EPlayerCondition_StaticEnum();
	}
	struct Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enumerators[] = {
		{ "EPlayerCondition::EPC_Moving", (int64)EPlayerCondition::EPC_Moving },
		{ "EPlayerCondition::EPC_Inspecting", (int64)EPlayerCondition::EPC_Inspecting },
		{ "EPlayerCondition::EPC_MAX", (int64)EPlayerCondition::EPC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EPC_Inspecting.DisplayName", "Inspecting object" },
		{ "EPC_Inspecting.Name", "EPlayerCondition::EPC_Inspecting" },
		{ "EPC_MAX.DisplayName", "MAX" },
		{ "EPC_MAX.Name", "EPlayerCondition::EPC_MAX" },
		{ "EPC_Moving.DisplayName", "Normal State" },
		{ "EPC_Moving.Name", "EPlayerCondition::EPC_Moving" },
		{ "ModuleRelativePath", "Enums/PlayerCondition.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GP3T4,
		nullptr,
		"EPlayerCondition",
		"EPlayerCondition",
		Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GP3T4_EPlayerCondition()
	{
		if (!Z_Registration_Info_UEnum_EPlayerCondition.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPlayerCondition.InnerSingleton, Z_Construct_UEnum_GP3T4_EPlayerCondition_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPlayerCondition.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h_Statics::EnumInfo[] = {
		{ EPlayerCondition_StaticEnum, TEXT("EPlayerCondition"), &Z_Registration_Info_UEnum_EPlayerCondition, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2484652431U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h_1601342082(TEXT("/Script/GP3T4"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
