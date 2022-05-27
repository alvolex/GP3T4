// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/AI/T4AIController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AIController() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4AIController_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4AIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
	AIMODULE_API UClass* Z_Construct_UClass_UAISenseConfig_Sight_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4AIBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4AIController::execGetNextPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetNextPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4AIController::execOnPerceptionUpdated)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
		P_NATIVE_END;
	}
	void AT4AIController::StaticRegisterNativesAT4AIController()
	{
		UClass* Class = AT4AIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNextPoint", &AT4AIController::execGetNextPoint },
			{ "OnPerceptionUpdated", &AT4AIController::execOnPerceptionUpdated },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics
	{
		struct T4AIController_eventGetNextPoint_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIController_eventGetNextPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4AIController, nullptr, "GetNextPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::T4AIController_eventGetNextPoint_Parms), Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4AIController_GetNextPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4AIController_GetNextPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics
	{
		struct T4AIController_eventOnPerceptionUpdated_Parms
		{
			AActor* Actor;
			FAIStimulus Stimulus;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIController_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIController_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(nullptr, 0) }; // 1354403599
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::NewProp_Stimulus,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4AIController, nullptr, "OnPerceptionUpdated", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::T4AIController_eventOnPerceptionUpdated_Parms), Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4AIController);
	UClass* Z_Construct_UClass_AT4AIController_NoRegister()
	{
		return AT4AIController::StaticClass();
	}
	struct Z_Construct_UClass_AT4AIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBehaviorToUse_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultBehaviorToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlledPawn_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ControlledPawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsGoingReverse_MetaData[];
#endif
		static void NewProp_bIsGoingReverse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGoingReverse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsFirstFollowPoint_MetaData[];
#endif
		static void NewProp_bIsFirstFollowPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFirstFollowPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TargetIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4AIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4AIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4AIController_GetNextPoint, "GetNextPoint" }, // 950544675
		{ &Z_Construct_UFunction_AT4AIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3404708971
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AI/T4AIController.h" },
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_Sight_MetaData[] = {
		{ "Category", "T4AIController" },
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_Sight = { "Sight", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIController, Sight), Z_Construct_UClass_UAISenseConfig_Sight_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_Sight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_Sight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_BlackboardComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_BlackboardComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_DefaultBehaviorToUse_MetaData[] = {
		{ "Category", "AI Settings" },
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_DefaultBehaviorToUse = { "DefaultBehaviorToUse", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIController, DefaultBehaviorToUse), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_DefaultBehaviorToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_DefaultBehaviorToUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_ControlledPawn_MetaData[] = {
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_ControlledPawn = { "ControlledPawn", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIController, ControlledPawn), Z_Construct_UClass_AT4AIBaseCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_ControlledPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_ControlledPawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse_MetaData[] = {
		{ "Category", "T4AIController" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly, Category = \"AI Settings\")\n//float SetAllMovementSpeed;\n" },
		{ "ModuleRelativePath", "AI/T4AIController.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly, Category = \"AI Settings\")\nfloat SetAllMovementSpeed;" },
	};
#endif
	void Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse_SetBit(void* Obj)
	{
		((AT4AIController*)Obj)->bIsGoingReverse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse = { "bIsGoingReverse", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4AIController), &Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint_MetaData[] = {
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	void Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint_SetBit(void* Obj)
	{
		((AT4AIController*)Obj)->bIsFirstFollowPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint = { "bIsFirstFollowPoint", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4AIController), &Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIController_Statics::NewProp_TargetIndex_MetaData[] = {
		{ "ModuleRelativePath", "AI/T4AIController.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AT4AIController_Statics::NewProp_TargetIndex = { "TargetIndex", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIController, TargetIndex), METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::NewProp_TargetIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::NewProp_TargetIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4AIController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_Sight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_BlackboardComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_DefaultBehaviorToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_ControlledPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsGoingReverse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_bIsFirstFollowPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIController_Statics::NewProp_TargetIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4AIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4AIController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4AIController_Statics::ClassParams = {
		&AT4AIController::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4AIController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4AIController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4AIController()
	{
		if (!Z_Registration_Info_UClass_AT4AIController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4AIController.OuterSingleton, Z_Construct_UClass_AT4AIController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4AIController.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4AIController>()
	{
		return AT4AIController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4AIController);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4AIController, AT4AIController::StaticClass, TEXT("AT4AIController"), &Z_Registration_Info_UClass_AT4AIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4AIController), 2283683473U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIController_h_205696815(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
