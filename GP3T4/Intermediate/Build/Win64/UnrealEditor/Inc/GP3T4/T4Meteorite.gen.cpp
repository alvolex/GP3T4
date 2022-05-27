// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4Meteorite.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Meteorite() {}
// Cross Module References
	GP3T4_API UEnum* Z_Construct_UEnum_GP3T4_EMeteoriteState();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	GP3T4_API UClass* Z_Construct_UClass_AT4Meteorite_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Meteorite();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4MeteoriteSpawner_NoRegister();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeteoriteState;
	static UEnum* EMeteoriteState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeteoriteState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeteoriteState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GP3T4_EMeteoriteState, Z_Construct_UPackage__Script_GP3T4(), TEXT("EMeteoriteState"));
		}
		return Z_Registration_Info_UEnum_EMeteoriteState.OuterSingleton;
	}
	template<> GP3T4_API UEnum* StaticEnum<EMeteoriteState>()
	{
		return EMeteoriteState_StaticEnum();
	}
	struct Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enumerators[] = {
		{ "EMeteoriteState::FlockingState", (int64)EMeteoriteState::FlockingState },
		{ "EMeteoriteState::PickedUpState", (int64)EMeteoriteState::PickedUpState },
		{ "EMeteoriteState::ShootingState", (int64)EMeteoriteState::ShootingState },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FlockingState.DisplayName", "FlockingState" },
		{ "FlockingState.Name", "EMeteoriteState::FlockingState" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "PickedUpState.DisplayName", "PickedUpState" },
		{ "PickedUpState.Name", "EMeteoriteState::PickedUpState" },
		{ "ShootingState.DisplayName", "ShootingState" },
		{ "ShootingState.Name", "EMeteoriteState::ShootingState" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GP3T4,
		nullptr,
		"EMeteoriteState",
		"EMeteoriteState",
		Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GP3T4_EMeteoriteState()
	{
		if (!Z_Registration_Info_UEnum_EMeteoriteState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeteoriteState.InnerSingleton, Z_Construct_UEnum_GP3T4_EMeteoriteState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeteoriteState.InnerSingleton;
	}
	DEFINE_FUNCTION(AT4Meteorite::execResetAgent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetAgent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execOnHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHit(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execCalculateToStayInRadius)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateToStayInRadius();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execCalculateSeparation)
	{
		P_GET_TARRAY(AActor*,Z_Param_OverlappingActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateSeparation(Z_Param_OverlappingActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execCalculateCohesion)
	{
		P_GET_TARRAY(AActor*,Z_Param_OverlappingActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateCohesion(Z_Param_OverlappingActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execCalculateAlignment)
	{
		P_GET_TARRAY(AActor*,Z_Param_OverlappingActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateAlignment(Z_Param_OverlappingActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Meteorite::execDoFlockingMovement)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DoFlockingMovement(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	static FName NAME_AT4Meteorite_ReciveOnDestroy = FName(TEXT("ReciveOnDestroy"));
	void AT4Meteorite::ReciveOnDestroy()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4Meteorite_ReciveOnDestroy),NULL);
	}
	void AT4Meteorite::StaticRegisterNativesAT4Meteorite()
	{
		UClass* Class = AT4Meteorite::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CalculateAlignment", &AT4Meteorite::execCalculateAlignment },
			{ "CalculateCohesion", &AT4Meteorite::execCalculateCohesion },
			{ "CalculateSeparation", &AT4Meteorite::execCalculateSeparation },
			{ "CalculateToStayInRadius", &AT4Meteorite::execCalculateToStayInRadius },
			{ "DoFlockingMovement", &AT4Meteorite::execDoFlockingMovement },
			{ "OnHit", &AT4Meteorite::execOnHit },
			{ "ResetAgent", &AT4Meteorite::execResetAgent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics
	{
		struct T4Meteorite_eventCalculateAlignment_Parms
		{
			TArray<AActor*> OverlappingActors;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateAlignment_Parms, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateAlignment_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_OverlappingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_OverlappingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "CalculateAlignment", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::T4Meteorite_eventCalculateAlignment_Parms), Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_CalculateAlignment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_CalculateAlignment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics
	{
		struct T4Meteorite_eventCalculateCohesion_Parms
		{
			TArray<AActor*> OverlappingActors;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateCohesion_Parms, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateCohesion_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_OverlappingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_OverlappingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "CalculateCohesion", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::T4Meteorite_eventCalculateCohesion_Parms), Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_CalculateCohesion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_CalculateCohesion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics
	{
		struct T4Meteorite_eventCalculateSeparation_Parms
		{
			TArray<AActor*> OverlappingActors;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappingActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverlappingActors;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_OverlappingActors_Inner = { "OverlappingActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_OverlappingActors = { "OverlappingActors", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateSeparation_Parms, OverlappingActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateSeparation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_OverlappingActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_OverlappingActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "CalculateSeparation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::T4Meteorite_eventCalculateSeparation_Parms), Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_CalculateSeparation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_CalculateSeparation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics
	{
		struct T4Meteorite_eventCalculateToStayInRadius_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventCalculateToStayInRadius_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "CalculateToStayInRadius", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::T4Meteorite_eventCalculateToStayInRadius_Parms), Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics
	{
		struct T4Meteorite_eventDoFlockingMovement_Parms
		{
			float DeltaTime;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventDoFlockingMovement_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "DoFlockingMovement", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::T4Meteorite_eventDoFlockingMovement_Parms), Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_OnHit_Statics
	{
		struct T4Meteorite_eventOnHit_Parms
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
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventOnHit_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventOnHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventOnHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventOnHit_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((T4Meteorite_eventOnHit_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4Meteorite_eventOnHit_Parms), &Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Meteorite_eventOnHit_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "OnHit", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::T4Meteorite_eventOnHit_Parms), Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_OnHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_OnHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnDestroy" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "ReciveOnDestroy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Meteorite, nullptr, "ResetAgent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Meteorite_ResetAgent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Meteorite_ResetAgent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4Meteorite);
	UClass* Z_Construct_UClass_AT4Meteorite_NoRegister()
	{
		return AT4Meteorite::StaticClass();
	}
	struct Z_Construct_UClass_AT4Meteorite_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpanShooting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpanShooting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TotalLifeSpanShooting_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalLifeSpanShooting;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Collision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Collision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShootDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShootDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlayerForward_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlayerForward;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceFromPlayerUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceFromPlayerUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Acceleration_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Acceleration;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToNeighbour_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToNeighbour;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToObstacles_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToObstacles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CohesionLerp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CohesionLerp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginPosition_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OriginPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDistToOrigin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDistToOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4Meteorite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4Meteorite_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4Meteorite_CalculateAlignment, "CalculateAlignment" }, // 9106904
		{ &Z_Construct_UFunction_AT4Meteorite_CalculateCohesion, "CalculateCohesion" }, // 997513429
		{ &Z_Construct_UFunction_AT4Meteorite_CalculateSeparation, "CalculateSeparation" }, // 445492575
		{ &Z_Construct_UFunction_AT4Meteorite_CalculateToStayInRadius, "CalculateToStayInRadius" }, // 2609035864
		{ &Z_Construct_UFunction_AT4Meteorite_DoFlockingMovement, "DoFlockingMovement" }, // 1811921193
		{ &Z_Construct_UFunction_AT4Meteorite_OnHit, "OnHit" }, // 2603613593
		{ &Z_Construct_UFunction_AT4Meteorite_ReciveOnDestroy, "ReciveOnDestroy" }, // 2382383483
		{ &Z_Construct_UFunction_AT4Meteorite_ResetAgent, "ResetAgent" }, // 2978645770
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4Meteorite.h" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_LifeSpanShooting_MetaData[] = {
		{ "Category", "T4Meteorite" },
		{ "Comment", "/**///State\n" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "///State" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_LifeSpanShooting = { "LifeSpanShooting", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, LifeSpanShooting), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_LifeSpanShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_LifeSpanShooting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_TotalLifeSpanShooting_MetaData[] = {
		{ "Category", "Shooting" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_TotalLifeSpanShooting = { "TotalLifeSpanShooting", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, TotalLifeSpanShooting), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_TotalLifeSpanShooting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_TotalLifeSpanShooting_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState_MetaData[] = {
		{ "Category", "T4Meteorite" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, CurrentState), Z_Construct_UEnum_GP3T4_EMeteoriteState, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState_MetaData)) }; // 3860338363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Collision_MetaData[] = {
		{ "Category", "Flocking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Collision = { "Collision", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, Collision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Collision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Collision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MeshCollision_MetaData[] = {
		{ "Category", "Shooting" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MeshCollision = { "MeshCollision", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, MeshCollision), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MeshCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MeshCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_ShootDirection_MetaData[] = {
		{ "Comment", "//Shoot\n" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "Shoot" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_ShootDirection = { "ShootDirection", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, ShootDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_ShootDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_ShootDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Comment", "//Interaction\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "Interaction" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_PlayerCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, PlayerCharacter), Z_Construct_UClass_AGP3T4Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_PlayerCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_PlayerCharacter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerForward_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerForward = { "DistanceFromPlayerForward", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, DistanceFromPlayerForward), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerForward_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerForward_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerUp_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerUp = { "DistanceFromPlayerUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, DistanceFromPlayerUp), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_StartSpeed_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_StartSpeed = { "StartSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, StartSpeed), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_StartSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_StartSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Acceleration_MetaData[] = {
		{ "Category", "Meteorite Weapon" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Acceleration = { "Acceleration", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, Acceleration), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Acceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Acceleration_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToNeighbour_MetaData[] = {
		{ "Category", "Flocking" },
		{ "Comment", "//Agent\n" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "Agent" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToNeighbour = { "DistanceToNeighbour", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, DistanceToNeighbour), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToNeighbour_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToNeighbour_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToObstacles_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToObstacles = { "DistanceToObstacles", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, DistanceToObstacles), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToObstacles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToObstacles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, Speed), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxSpeed_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxSpeed = { "MaxSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, MaxSpeed), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_RotationLerp_MetaData[] = {
		{ "Category", "Flocking" },
		{ "Comment", "//Lerping\n" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "Lerping" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_RotationLerp = { "RotationLerp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, RotationLerp), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_RotationLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_RotationLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MoveLerp_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MoveLerp = { "MoveLerp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, MoveLerp), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MoveLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MoveLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CohesionLerp_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CohesionLerp = { "CohesionLerp", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, CohesionLerp), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CohesionLerp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CohesionLerp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_OriginPosition_MetaData[] = {
		{ "Category", "Flocking" },
		{ "Comment", "//Stay within radius\n" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
		{ "ToolTip", "Stay within radius" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_OriginPosition = { "OriginPosition", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, OriginPosition), Z_Construct_UClass_AT4MeteoriteSpawner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_OriginPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_OriginPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxDistToOrigin_MetaData[] = {
		{ "Category", "Flocking" },
		{ "ModuleRelativePath", "Interactables/T4Meteorite.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxDistToOrigin = { "MaxDistToOrigin", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4Meteorite, MaxDistToOrigin), METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxDistToOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxDistToOrigin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4Meteorite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_LifeSpanShooting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_TotalLifeSpanShooting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CurrentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Collision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MeshCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_ShootDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CameraComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_PlayerCharacter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerForward,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceFromPlayerUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_StartSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Acceleration,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToNeighbour,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_DistanceToObstacles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_RotationLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MoveLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_CohesionLerp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_OriginPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Meteorite_Statics::NewProp_MaxDistToOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4Meteorite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4Meteorite>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4Meteorite_Statics::ClassParams = {
		&AT4Meteorite::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4Meteorite_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4Meteorite_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Meteorite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4Meteorite()
	{
		if (!Z_Registration_Info_UClass_AT4Meteorite.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4Meteorite.OuterSingleton, Z_Construct_UClass_AT4Meteorite_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4Meteorite.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4Meteorite>()
	{
		return AT4Meteorite::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4Meteorite);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::EnumInfo[] = {
		{ EMeteoriteState_StaticEnum, TEXT("EMeteoriteState"), &Z_Registration_Info_UEnum_EMeteoriteState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3860338363U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4Meteorite, AT4Meteorite::StaticClass, TEXT("AT4Meteorite"), &Z_Registration_Info_UClass_AT4Meteorite, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4Meteorite), 3018370642U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_4019503207(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
