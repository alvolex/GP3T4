// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interfaces/T4IsOverlapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4IsOverlapping() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UT4IsOverlapping_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4IsOverlapping();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
// End Cross Module References
	DEFINE_FUNCTION(IT4IsOverlapping::execOnOverlapTriggered)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapTriggered_Implementation();
		P_NATIVE_END;
	}
	void IT4IsOverlapping::OnOverlapTriggered()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOverlapTriggered instead.");
	}
	void UT4IsOverlapping::StaticRegisterNativesUT4IsOverlapping()
	{
		UClass* Class = UT4IsOverlapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapTriggered", &IT4IsOverlapping::execOnOverlapTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/T4IsOverlapping.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4IsOverlapping, nullptr, "OnOverlapTriggered", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UT4IsOverlapping);
	UClass* Z_Construct_UClass_UT4IsOverlapping_NoRegister()
	{
		return UT4IsOverlapping::StaticClass();
	}
	struct Z_Construct_UClass_UT4IsOverlapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4IsOverlapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4IsOverlapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4IsOverlapping_OnOverlapTriggered, "OnOverlapTriggered" }, // 750328092
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4IsOverlapping_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interfaces/T4IsOverlapping.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4IsOverlapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IT4IsOverlapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UT4IsOverlapping_Statics::ClassParams = {
		&UT4IsOverlapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UT4IsOverlapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4IsOverlapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4IsOverlapping()
	{
		if (!Z_Registration_Info_UClass_UT4IsOverlapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UT4IsOverlapping.OuterSingleton, Z_Construct_UClass_UT4IsOverlapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UT4IsOverlapping.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UT4IsOverlapping>()
	{
		return UT4IsOverlapping::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4IsOverlapping);
	static FName NAME_UT4IsOverlapping_OnOverlapTriggered = FName(TEXT("OnOverlapTriggered"));
	void IT4IsOverlapping::Execute_OnOverlapTriggered(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UT4IsOverlapping::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UT4IsOverlapping_OnOverlapTriggered);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IT4IsOverlapping*)(O->GetNativeInterfaceAddress(UT4IsOverlapping::StaticClass())))
		{
			I->OnOverlapTriggered_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UT4IsOverlapping, UT4IsOverlapping::StaticClass, TEXT("UT4IsOverlapping"), &Z_Registration_Info_UClass_UT4IsOverlapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UT4IsOverlapping), 2319944977U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_4245610639(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
