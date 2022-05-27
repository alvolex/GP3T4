// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interfaces/IsInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsInteractable() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UIsInteractable_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UIsInteractable();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void UIsInteractable::StaticRegisterNativesUIsInteractable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UIsInteractable);
	UClass* Z_Construct_UClass_UIsInteractable_NoRegister()
	{
		return UIsInteractable::StaticClass();
	}
	struct Z_Construct_UClass_UIsInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsInteractable_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/IsInteractable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IIsInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UIsInteractable_Statics::ClassParams = {
		&UIsInteractable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsInteractable()
	{
		if (!Z_Registration_Info_UClass_UIsInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UIsInteractable.OuterSingleton, Z_Construct_UClass_UIsInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UIsInteractable.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UIsInteractable>()
	{
		return UIsInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsInteractable);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UIsInteractable, UIsInteractable::StaticClass, TEXT("UIsInteractable"), &Z_Registration_Info_UClass_UIsInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UIsInteractable), 3928601144U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsInteractable_h_2601855146(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_IsInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
