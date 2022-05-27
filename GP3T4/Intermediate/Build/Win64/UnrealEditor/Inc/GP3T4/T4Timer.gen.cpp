// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/T4Timer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Timer() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4Timer_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Timer();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	DEFINE_FUNCTION(AT4Timer::execStartTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartTimer();
		P_NATIVE_END;
	}
	static FName NAME_AT4Timer_TimerFinished = FName(TEXT("TimerFinished"));
	void AT4Timer::TimerFinished()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4Timer_TimerFinished),NULL);
	}
	void AT4Timer::StaticRegisterNativesAT4Timer()
	{
		UClass* Class = AT4Timer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartTimer", &AT4Timer::execStartTimer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4Timer_StartTimer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Timer_StartTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Timer_StartTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Timer, nullptr, "StartTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Timer_StartTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Timer_StartTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Timer_StartTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Timer_StartTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Timer_TimerFinished_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Timer_TimerFinished_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Timer_TimerFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Timer, nullptr, "TimerFinished", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Timer_TimerFinished_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Timer_TimerFinished_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Timer_TimerFinished()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Timer_TimerFinished_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4Timer);
	UClass* Z_Construct_UClass_AT4Timer_NoRegister()
	{
		return AT4Timer::StaticClass();
	}
	struct Z_Construct_UClass_AT4Timer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CountdownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CountdownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimerIsStarted_MetaData[];
#endif
		static void NewProp_bTimerIsStarted_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimerIsStarted;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4Timer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4Timer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4Timer_StartTimer, "StartTimer" }, // 3462722196
		{ &Z_Construct_UFunction_AT4Timer_TimerFinished, "TimerFinished" }, // 3635603696
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Timer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "T4Timer.h" },
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Timer_Statics::NewProp_CountdownTime_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Timer_Statics::NewProp_CountdownTime = { "CountdownTime", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Timer, CountdownTime), METADATA_PARAMS(Z_Construct_UClass_AT4Timer_Statics::NewProp_CountdownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Timer_Statics::NewProp_CountdownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Timer_Statics::NewProp_TextSize_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Timer_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Timer, TextSize), METADATA_PARAMS(Z_Construct_UClass_AT4Timer_Statics::NewProp_TextSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Timer_Statics::NewProp_TextSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "T4Timer.h" },
	};
#endif
	void Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted_SetBit(void* Obj)
	{
		((AT4Timer*)Obj)->bTimerIsStarted = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted = { "bTimerIsStarted", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4Timer), &Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4Timer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Timer_Statics::NewProp_CountdownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Timer_Statics::NewProp_TextSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Timer_Statics::NewProp_bTimerIsStarted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4Timer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4Timer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4Timer_Statics::ClassParams = {
		&AT4Timer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4Timer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4Timer_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4Timer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Timer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4Timer()
	{
		if (!Z_Registration_Info_UClass_AT4Timer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4Timer.OuterSingleton, Z_Construct_UClass_AT4Timer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4Timer.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4Timer>()
	{
		return AT4Timer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4Timer);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_T4Timer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_T4Timer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4Timer, AT4Timer::StaticClass, TEXT("AT4Timer"), &Z_Registration_Info_UClass_AT4Timer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4Timer), 3057161003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_T4Timer_h_2464854222(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_T4Timer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_T4Timer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
