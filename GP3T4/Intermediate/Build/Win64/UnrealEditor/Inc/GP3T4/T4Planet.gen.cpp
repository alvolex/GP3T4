// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Planet/T4Planet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Planet() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4Planet_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Planet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3T4_API UClass* Z_Construct_UClass_UT4CanBeHit_NoRegister();
// End Cross Module References
	static FName NAME_AT4Planet_ReceiveOnDestroy = FName(TEXT("ReceiveOnDestroy"));
	void AT4Planet::ReceiveOnDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4Planet_ReceiveOnDestroy),NULL);
	}
	void AT4Planet::StaticRegisterNativesAT4Planet()
	{
	}
	struct Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnDestroy" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Planet, nullptr, "ReceiveOnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4Planet);
	UClass* Z_Construct_UClass_AT4Planet_NoRegister()
	{
		return AT4Planet::StaticClass();
	}
	struct Z_Construct_UClass_AT4Planet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SunLapsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SunLapsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisLapsPerSecond_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisLapsPerSecond;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mass_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Mass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSun_MetaData[];
#endif
		static void NewProp_bIsSun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeathHit_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DeathHit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4Planet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4Planet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4Planet_ReceiveOnDestroy, "ReceiveOnDestroy" }, // 2056817971
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Planet/T4Planet.h" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_Root_MetaData[] = {
		{ "Category", "T4Planet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Planet, Root), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_Root_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_Root_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_SunLapsPerSecond_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_SunLapsPerSecond = { "SunLapsPerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Planet, SunLapsPerSecond), METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_SunLapsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_SunLapsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_AxisLapsPerSecond_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_AxisLapsPerSecond = { "AxisLapsPerSecond", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Planet, AxisLapsPerSecond), METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_AxisLapsPerSecond_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_AxisLapsPerSecond_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_Mass_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_Mass = { "Mass", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Planet, Mass), METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_Mass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_Mass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun_MetaData[] = {
		{ "Category", "Planet" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	void Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun_SetBit(void* Obj)
	{
		((AT4Planet*)Obj)->bIsSun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun = { "bIsSun", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4Planet), &Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Planet_Statics::NewProp_DeathHit_MetaData[] = {
		{ "Category", "T4Planet" },
		{ "ModuleRelativePath", "Planet/T4Planet.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AT4Planet_Statics::NewProp_DeathHit = { "DeathHit", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Planet, DeathHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::NewProp_DeathHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::NewProp_DeathHit_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4Planet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_Root,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_SunLapsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_AxisLapsPerSecond,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_Mass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_bIsSun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Planet_Statics::NewProp_DeathHit,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AT4Planet_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UT4CanBeHit_NoRegister, (int32)VTABLE_OFFSET(AT4Planet, IT4CanBeHit), false },  // 3832377700
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4Planet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4Planet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4Planet_Statics::ClassParams = {
		&AT4Planet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4Planet_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4Planet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Planet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4Planet()
	{
		if (!Z_Registration_Info_UClass_AT4Planet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4Planet.OuterSingleton, Z_Construct_UClass_AT4Planet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4Planet.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4Planet>()
	{
		return AT4Planet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4Planet);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Planet_T4Planet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Planet_T4Planet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4Planet, AT4Planet::StaticClass, TEXT("AT4Planet"), &Z_Registration_Info_UClass_AT4Planet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4Planet), 2357664480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Planet_T4Planet_h_2815823224(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Planet_T4Planet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Planet_T4Planet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
