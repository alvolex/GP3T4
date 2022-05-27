// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interfaces/IsPlayerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsPlayerCharacter() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UIsPlayerCharacter_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UIsPlayerCharacter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void UIsPlayerCharacter::StaticRegisterNativesUIsPlayerCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsPlayerCharacter);
	UClass* Z_Construct_UClass_UIsPlayerCharacter_NoRegister()
	{
		return UIsPlayerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_UIsPlayerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsPlayerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsPlayerCharacter_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IsPlayerCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsPlayerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsPlayerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsPlayerCharacter_Statics::ClassParams = {
		&UIsPlayerCharacter::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UIsPlayerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsPlayerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsPlayerCharacter()
	{
		if (!Z_Registration_Info_UClass_UIsPlayerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsPlayerCharacter.OuterSingleton, Z_Construct_UClass_UIsPlayerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsPlayerCharacter.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UIsPlayerCharacter>()
	{
		return UIsPlayerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsPlayerCharacter);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsPlayerCharacter, UIsPlayerCharacter::StaticClass, TEXT("UIsPlayerCharacter"), &Z_Registration_Info_UClass_UIsPlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsPlayerCharacter), 2567903909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_3080103535(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
