// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Props/T4MovingApple.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MovingApple() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4MovingApple_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4MovingApple();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4MovingApple::execStartMovingTowardsPlayer)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent1);
		P_GET_PROPERTY(FIntProperty,Z_Param_I);
		P_GET_UBOOL(Z_Param_bArg);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartMovingTowardsPlayer(Z_Param_PrimitiveComponent,Z_Param_Actor,Z_Param_PrimitiveComponent1,Z_Param_I,Z_Param_bArg,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	static FName NAME_AT4MovingApple_ReceiveStartMoving = FName(TEXT("ReceiveStartMoving"));
	void AT4MovingApple::ReceiveStartMoving()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4MovingApple_ReceiveStartMoving),NULL);
	}
	static FName NAME_AT4MovingApple_ReceiveStopMoving = FName(TEXT("ReceiveStopMoving"));
	void AT4MovingApple::ReceiveStopMoving()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4MovingApple_ReceiveStopMoving),NULL);
	}
	void AT4MovingApple::StaticRegisterNativesAT4MovingApple()
	{
		UClass* Class = AT4MovingApple::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartMovingTowardsPlayer", &AT4MovingApple::execStartMovingTowardsPlayer },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnStartMoving" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4MovingApple, nullptr, "ReceiveStartMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "OnSTopMoving" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4MovingApple, nullptr, "ReceiveStopMoving", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics
	{
		struct T4MovingApple_eventStartMovingTowardsPlayer_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			AActor* Actor;
			UPrimitiveComponent* PrimitiveComponent1;
			int32 I;
			bool bArg;
			FHitResult HitResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PrimitiveComponent1;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_I;
		static void NewProp_bArg_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bArg;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovingApple_eventStartMovingTowardsPlayer_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovingApple_eventStartMovingTowardsPlayer_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent1 = { "PrimitiveComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovingApple_eventStartMovingTowardsPlayer_Parms, PrimitiveComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent1_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovingApple_eventStartMovingTowardsPlayer_Parms, I), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_bArg_SetBit(void* Obj)
	{
		((T4MovingApple_eventStartMovingTowardsPlayer_Parms*)Obj)->bArg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_bArg = { "bArg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4MovingApple_eventStartMovingTowardsPlayer_Parms), &Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_bArg_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MovingApple_eventStartMovingTowardsPlayer_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_PrimitiveComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_I,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_bArg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4MovingApple, nullptr, "StartMovingTowardsPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::T4MovingApple_eventStartMovingTowardsPlayer_Parms), Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4MovingApple);
	UClass* Z_Construct_UClass_AT4MovingApple_NoRegister()
	{
		return AT4MovingApple::StaticClass();
	}
	struct Z_Construct_UClass_AT4MovingApple_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppleMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppleMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AppleAggroRadius_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AppleAggroRadius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StopMovingRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StopMovingRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FollowSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldFollowPlayer_MetaData[];
#endif
		static void NewProp_bShouldFollowPlayer_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldFollowPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4MovingApple_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4MovingApple_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4MovingApple_ReceiveStartMoving, "ReceiveStartMoving" }, // 2169120004
		{ &Z_Construct_UFunction_AT4MovingApple_ReceiveStopMoving, "ReceiveStopMoving" }, // 84933069
		{ &Z_Construct_UFunction_AT4MovingApple_StartMovingTowardsPlayer, "StartMovingTowardsPlayer" }, // 1011437073
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Props/T4MovingApple.h" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleMesh_MetaData[] = {
		{ "Category", "Apple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleMesh = { "AppleMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MovingApple, AppleMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleAggroRadius_MetaData[] = {
		{ "Category", "Apple" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleAggroRadius = { "AppleAggroRadius", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MovingApple, AppleAggroRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleAggroRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleAggroRadius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_StopMovingRange_MetaData[] = {
		{ "Category", "Apple" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_StopMovingRange = { "StopMovingRange", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MovingApple, StopMovingRange), METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_StopMovingRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_StopMovingRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_FollowSpeed_MetaData[] = {
		{ "Category", "Apple" },
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_FollowSpeed = { "FollowSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MovingApple, FollowSpeed), METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_FollowSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_FollowSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_PlayerActor_MetaData[] = {
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_PlayerActor = { "PlayerActor", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4MovingApple, PlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_PlayerActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_PlayerActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Props/T4MovingApple.h" },
	};
#endif
	void Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer_SetBit(void* Obj)
	{
		((AT4MovingApple*)Obj)->bShouldFollowPlayer = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer = { "bShouldFollowPlayer", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4MovingApple), &Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4MovingApple_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_AppleAggroRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_StopMovingRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_FollowSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_PlayerActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4MovingApple_Statics::NewProp_bShouldFollowPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4MovingApple_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4MovingApple>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4MovingApple_Statics::ClassParams = {
		&AT4MovingApple::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4MovingApple_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4MovingApple_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4MovingApple_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4MovingApple()
	{
		if (!Z_Registration_Info_UClass_AT4MovingApple.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4MovingApple.OuterSingleton, Z_Construct_UClass_AT4MovingApple_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4MovingApple.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4MovingApple>()
	{
		return AT4MovingApple::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4MovingApple);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Props_T4MovingApple_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Props_T4MovingApple_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4MovingApple, AT4MovingApple::StaticClass, TEXT("AT4MovingApple"), &Z_Registration_Info_UClass_AT4MovingApple, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4MovingApple), 3120750363U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Props_T4MovingApple_h_4222933070(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Props_T4MovingApple_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Props_T4MovingApple_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
