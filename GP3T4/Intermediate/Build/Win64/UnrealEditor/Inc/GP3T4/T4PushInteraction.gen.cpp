// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4PushInteraction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PushInteraction() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4PushInteraction_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4PushInteraction();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void AT4PushInteraction::StaticRegisterNativesAT4PushInteraction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4PushInteraction);
	UClass* Z_Construct_UClass_AT4PushInteraction_NoRegister()
	{
		return AT4PushInteraction::StaticClass();
	}
	struct Z_Construct_UClass_AT4PushInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PushInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PushInteraction_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Interactables/T4PushInteraction.h" },
		{ "ModuleRelativePath", "Interactables/T4PushInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PushInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PushInteraction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4PushInteraction_Statics::ClassParams = {
		&AT4PushInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PushInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PushInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PushInteraction()
	{
		if (!Z_Registration_Info_UClass_AT4PushInteraction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4PushInteraction.OuterSingleton, Z_Construct_UClass_AT4PushInteraction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4PushInteraction.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4PushInteraction>()
	{
		return AT4PushInteraction::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PushInteraction);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PushInteraction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PushInteraction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4PushInteraction, AT4PushInteraction::StaticClass, TEXT("AT4PushInteraction"), &Z_Registration_Info_UClass_AT4PushInteraction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4PushInteraction), 3538462415U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PushInteraction_h_1211799491(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PushInteraction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PushInteraction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
