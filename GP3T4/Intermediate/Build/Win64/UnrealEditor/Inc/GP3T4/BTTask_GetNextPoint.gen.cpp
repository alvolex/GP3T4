// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/AI/BTTask_GetNextPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_GetNextPoint() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UBTTask_GetNextPoint_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UBTTask_GetNextPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	void UBTTask_GetNextPoint::StaticRegisterNativesUBTTask_GetNextPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTTask_GetNextPoint);
	UClass* Z_Construct_UClass_UBTTask_GetNextPoint_NoRegister()
	{
		return UBTTask_GetNextPoint::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_GetNextPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_GetNextPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_GetNextPoint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AI/BTTask_GetNextPoint.h" },
		{ "ModuleRelativePath", "AI/BTTask_GetNextPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_GetNextPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_GetNextPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_GetNextPoint_Statics::ClassParams = {
		&UBTTask_GetNextPoint::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_GetNextPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_GetNextPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_GetNextPoint()
	{
		if (!Z_Registration_Info_UClass_UBTTask_GetNextPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTTask_GetNextPoint.OuterSingleton, Z_Construct_UClass_UBTTask_GetNextPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTTask_GetNextPoint.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UBTTask_GetNextPoint>()
	{
		return UBTTask_GetNextPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_GetNextPoint);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_BTTask_GetNextPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_BTTask_GetNextPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTTask_GetNextPoint, UBTTask_GetNextPoint::StaticClass, TEXT("UBTTask_GetNextPoint"), &Z_Registration_Info_UClass_UBTTask_GetNextPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTTask_GetNextPoint), 2956905285U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_BTTask_GetNextPoint_h_1338207972(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_BTTask_GetNextPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_BTTask_GetNextPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
