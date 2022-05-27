// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Levels/T4LoadLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4LoadLevel() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4LoadLevel_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4LoadLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4LoadLevel::execLoadLevel)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LoadLevel(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AT4LoadLevel::StaticRegisterNativesAT4LoadLevel()
	{
		UClass* Class = AT4LoadLevel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadLevel", &AT4LoadLevel::execLoadLevel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics
	{
		struct T4LoadLevel_eventLoadLevel_Parms
		{
			UPrimitiveComponent* OverlappedComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4LoadLevel_eventLoadLevel_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4LoadLevel_eventLoadLevel_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4LoadLevel_eventLoadLevel_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4LoadLevel_eventLoadLevel_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((T4LoadLevel_eventLoadLevel_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4LoadLevel_eventLoadLevel_Parms), &Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4LoadLevel_eventLoadLevel_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Levels/T4LoadLevel.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4LoadLevel, nullptr, "LoadLevel", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::T4LoadLevel_eventLoadLevel_Parms), Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4LoadLevel_LoadLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4LoadLevel_LoadLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4LoadLevel);
	UClass* Z_Construct_UClass_AT4LoadLevel_NoRegister()
	{
		return AT4LoadLevel::StaticClass();
	}
	struct Z_Construct_UClass_AT4LoadLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TriggerBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToChangeTo_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelToChangeTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4LoadLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4LoadLevel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4LoadLevel_LoadLevel, "LoadLevel" }, // 1394493257
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4LoadLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Levels/T4LoadLevel.h" },
		{ "ModuleRelativePath", "Levels/T4LoadLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_TriggerBox_MetaData[] = {
		{ "Category", "T4LoadLevel" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Levels/T4LoadLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_TriggerBox = { "TriggerBox", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4LoadLevel, TriggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_TriggerBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_TriggerBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_LevelToChangeTo_MetaData[] = {
		{ "Category", "T4LoadLevel" },
		{ "ModuleRelativePath", "Levels/T4LoadLevel.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_LevelToChangeTo = { "LevelToChangeTo", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4LoadLevel, LevelToChangeTo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_LevelToChangeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_LevelToChangeTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4LoadLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_TriggerBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4LoadLevel_Statics::NewProp_LevelToChangeTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4LoadLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4LoadLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4LoadLevel_Statics::ClassParams = {
		&AT4LoadLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4LoadLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4LoadLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4LoadLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4LoadLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4LoadLevel()
	{
		if (!Z_Registration_Info_UClass_AT4LoadLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4LoadLevel.OuterSingleton, Z_Construct_UClass_AT4LoadLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4LoadLevel.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4LoadLevel>()
	{
		return AT4LoadLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4LoadLevel);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LoadLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LoadLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4LoadLevel, AT4LoadLevel::StaticClass, TEXT("AT4LoadLevel"), &Z_Registration_Info_UClass_AT4LoadLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4LoadLevel), 1440362656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LoadLevel_h_61324298(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LoadLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Levels_T4LoadLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
