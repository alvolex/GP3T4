// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interfaces/T4CanBeHit.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4CanBeHit() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UT4CanBeHit_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4CanBeHit();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void UT4CanBeHit::StaticRegisterNativesUT4CanBeHit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UT4CanBeHit);
	UClass* Z_Construct_UClass_UT4CanBeHit_NoRegister()
	{
		return UT4CanBeHit::StaticClass();
	}
	struct Z_Construct_UClass_UT4CanBeHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4CanBeHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4CanBeHit_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/T4CanBeHit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4CanBeHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IT4CanBeHit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UT4CanBeHit_Statics::ClassParams = {
		&UT4CanBeHit::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UT4CanBeHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4CanBeHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4CanBeHit()
	{
		if (!Z_Registration_Info_UClass_UT4CanBeHit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UT4CanBeHit.OuterSingleton, Z_Construct_UClass_UT4CanBeHit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UT4CanBeHit.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UT4CanBeHit>()
	{
		return UT4CanBeHit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4CanBeHit);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4CanBeHit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4CanBeHit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UT4CanBeHit, UT4CanBeHit::StaticClass, TEXT("UT4CanBeHit"), &Z_Registration_Info_UClass_UT4CanBeHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UT4CanBeHit), 3832377700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4CanBeHit_h_1273849290(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4CanBeHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4CanBeHit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
