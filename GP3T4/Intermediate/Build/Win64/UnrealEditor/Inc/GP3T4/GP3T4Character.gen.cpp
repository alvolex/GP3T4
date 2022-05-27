// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/GP3T4Character.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3T4Character() {}
// Cross Module References
	GP3T4_API UFunction* Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	GP3T4_API UFunction* Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Meteorite_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UPickUpAndLookAtComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UIsPlayerCharacter_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Declaration of the delegate that will be called when the Primary Action is triggered\n// It is declared as dynamic so it can be accessed also in Blueprints\n" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "Declaration of the delegate that will be called when the Primary Action is triggered\nIt is declared as dynamic so it can be accessed also in Blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GP3T4, nullptr, "OnUseItem__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_GP3T4, nullptr, "OnRightClick__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGP3T4Character::execLockInputAtSleep)
	{
		P_GET_UBOOL(Z_Param_bLock);
		P_GET_STRUCT(FVector,Z_Param_NewLocation);
		P_GET_STRUCT(FRotator,Z_Param_NewRotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockInputAtSleep(Z_Param_bLock,Z_Param_NewLocation,Z_Param_NewRotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3T4Character::execLockPlayerLookRotation)
	{
		P_GET_UBOOL(Z_Param_bLockMovement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LockPlayerLookRotation(Z_Param_bLockMovement);
		P_NATIVE_END;
	}
	void AGP3T4Character::StaticRegisterNativesAGP3T4Character()
	{
		UClass* Class = AGP3T4Character::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LockInputAtSleep", &AGP3T4Character::execLockInputAtSleep },
			{ "LockPlayerLookRotation", &AGP3T4Character::execLockPlayerLookRotation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics
	{
		struct GP3T4Character_eventLockInputAtSleep_Parms
		{
			bool bLock;
			FVector NewLocation;
			FRotator NewRotation;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLock_MetaData[];
#endif
		static void NewProp_bLock_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLock;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock_SetBit(void* Obj)
	{
		((GP3T4Character_eventLockInputAtSleep_Parms*)Obj)->bLock = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock = { "bLock", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3T4Character_eventLockInputAtSleep_Parms), &Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3T4Character_eventLockInputAtSleep_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewRotation = { "NewRotation", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3T4Character_eventLockInputAtSleep_Parms, NewRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewRotation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_bLock,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::NewProp_NewRotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3T4Character, nullptr, "LockInputAtSleep", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::GP3T4Character_eventLockInputAtSleep_Parms), Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics
	{
		struct GP3T4Character_eventLockPlayerLookRotation_Parms
		{
			bool bLockMovement;
		};
		static void NewProp_bLockMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLockMovement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::NewProp_bLockMovement_SetBit(void* Obj)
	{
		((GP3T4Character_eventLockPlayerLookRotation_Parms*)Obj)->bLockMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::NewProp_bLockMovement = { "bLockMovement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3T4Character_eventLockPlayerLookRotation_Parms), &Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::NewProp_bLockMovement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::NewProp_bLockMovement,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/*\n\x09 * Lock rotation\n\x09 */" },
		{ "CPP_Default_bLockMovement", "true" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "* Lock rotation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3T4Character, nullptr, "LockPlayerLookRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::GP3T4Character_eventLockPlayerLookRotation_Parms), Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGP3T4Character);
	UClass* Z_Construct_UClass_AGP3T4Character_NoRegister()
	{
		return AGP3T4Character::StaticClass();
	}
	struct Z_Construct_UClass_AGP3T4Character_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TurnRateGamepad_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TurnRateGamepad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnUseItem_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnUseItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnRightClick_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnRightClick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeteoriteWeapon_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeteoriteWeapon;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InteractionLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InteractionLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HitTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintMovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintMovementSpeed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YawMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_YawMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMax_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMax;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchMin_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchMin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LockCameraMovement_MetaData[];
#endif
		static void NewProp_LockCameraMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_LockCameraMovement;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisablePlayerInput_MetaData[];
#endif
		static void NewProp_bDisablePlayerInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisablePlayerInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickUpAndLookAtComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickUpAndLookAtComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PositionToHoldItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PositionToHoldItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshToInspect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshToInspect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeldItemRotationSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeldItemRotationSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3T4Character_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGP3T4Character_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGP3T4Character_LockInputAtSleep, "LockInputAtSleep" }, // 1731172070
		{ &Z_Construct_UFunction_AGP3T4Character_LockPlayerLookRotation, "LockPlayerLookRotation" }, // 1378115671
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GP3T4Character.h" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** First person camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "First person camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_FirstPersonCameraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_FirstPersonCameraComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_TurnRateGamepad_MetaData[] = {
		{ "Category", "Camera" },
		{ "Comment", "/** Base turn rate, in deg/sec. Other scaling may affect final turn rate. */" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "Base turn rate, in deg/sec. Other scaling may affect final turn rate." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_TurnRateGamepad = { "TurnRateGamepad", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, TurnRateGamepad), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_TurnRateGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_TurnRateGamepad_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnUseItem_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** Delegate to whom anyone can subscribe to receive this event */" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "Delegate to whom anyone can subscribe to receive this event" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnUseItem = { "OnUseItem", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, OnUseItem), Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnUseItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnUseItem_MetaData)) }; // 3810071059
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnRightClick_MetaData[] = {
		{ "Category", "Interaction" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnRightClick = { "OnRightClick", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, OnRightClick), Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnRightClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnRightClick_MetaData)) }; // 828256726
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeteoriteWeapon_MetaData[] = {
		{ "Comment", "/*Meteorite*/" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "Meteorite" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeteoriteWeapon = { "MeteoriteWeapon", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, MeteoriteWeapon), Z_Construct_UClass_AT4Meteorite_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeteoriteWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeteoriteWeapon_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_InteractionLength_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/*\n\x09 *  Interaction \n\x09 */" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "*  Interaction" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_InteractionLength = { "InteractionLength", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, InteractionLength), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_InteractionLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_InteractionLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HitTarget_MetaData[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HitTarget = { "HitTarget", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, HitTarget), Z_Construct_UClass_AT4Interactable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HitTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HitTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_BaseMovementSpeed_MetaData[] = {
		{ "Category", "Moving" },
		{ "Comment", "/*\n\x09 * Sprint\n\x09 */" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "* Sprint" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_BaseMovementSpeed = { "BaseMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, BaseMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_BaseMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_BaseMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_SprintMovementSpeed_MetaData[] = {
		{ "Category", "Moving" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_SprintMovementSpeed = { "SprintMovementSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, SprintMovementSpeed), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_SprintMovementSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_SprintMovementSpeed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMax_MetaData[] = {
		{ "Category", "CameraLock" },
		{ "Comment", "/*\n\x09 * Camera lock\n\x09 */" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "* Camera lock" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMax = { "YawMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, YawMax), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMin_MetaData[] = {
		{ "Category", "CameraLock" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMin = { "YawMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, YawMin), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMax_MetaData[] = {
		{ "Category", "CameraLock" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMax = { "PitchMax", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, PitchMax), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMax_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMax_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMin_MetaData[] = {
		{ "Category", "CameraLock" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMin = { "PitchMin", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, PitchMin), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement_MetaData[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	void Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement_SetBit(void* Obj)
	{
		((AGP3T4Character*)Obj)->LockCameraMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement = { "LockCameraMovement", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3T4Character), &Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput_MetaData[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	void Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput_SetBit(void* Obj)
	{
		((AGP3T4Character*)Obj)->bDisablePlayerInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput = { "bDisablePlayerInput", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3T4Character), &Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_CameraManger_MetaData[] = {
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_CameraManger = { "CameraManger", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, CameraManger), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_CameraManger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_CameraManger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PickUpAndLookAtComponent_MetaData[] = {
		{ "Category", "GP3T4Character" },
		{ "Comment", "/*\n\x09* Pickup and Look at objects\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
		{ "ToolTip", "* Pickup and Look at objects" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PickUpAndLookAtComponent = { "PickUpAndLookAtComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, PickUpAndLookAtComponent), Z_Construct_UClass_UPickUpAndLookAtComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PickUpAndLookAtComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PickUpAndLookAtComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PositionToHoldItem_MetaData[] = {
		{ "Category", "GP3T4Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PositionToHoldItem = { "PositionToHoldItem", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, PositionToHoldItem), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PositionToHoldItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PositionToHoldItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeshToInspect_MetaData[] = {
		{ "Category", "GP3T4Character" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeshToInspect = { "MeshToInspect", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, MeshToInspect), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeshToInspect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeshToInspect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HeldItemRotationSpeed_MetaData[] = {
		{ "Category", "GP3T4Character" },
		{ "ModuleRelativePath", "GP3T4Character.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HeldItemRotationSpeed = { "HeldItemRotationSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3T4Character, HeldItemRotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HeldItemRotationSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HeldItemRotationSpeed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3T4Character_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_FirstPersonCameraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_TurnRateGamepad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnUseItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_OnRightClick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeteoriteWeapon,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_InteractionLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HitTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_BaseMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_SprintMovementSpeed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_YawMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMax,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PitchMin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_LockCameraMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_bDisablePlayerInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_CameraManger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PickUpAndLookAtComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_PositionToHoldItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_MeshToInspect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3T4Character_Statics::NewProp_HeldItemRotationSpeed,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AGP3T4Character_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIsPlayerCharacter_NoRegister, (int32)VTABLE_OFFSET(AGP3T4Character, IIsPlayerCharacter), false },  // 2567903909
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3T4Character_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3T4Character>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGP3T4Character_Statics::ClassParams = {
		&AGP3T4Character::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGP3T4Character_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3T4Character_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3T4Character_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3T4Character()
	{
		if (!Z_Registration_Info_UClass_AGP3T4Character.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGP3T4Character.OuterSingleton, Z_Construct_UClass_AGP3T4Character_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGP3T4Character.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AGP3T4Character>()
	{
		return AGP3T4Character::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3T4Character);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4Character_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4Character_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGP3T4Character, AGP3T4Character::StaticClass, TEXT("AGP3T4Character"), &Z_Registration_Info_UClass_AGP3T4Character, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGP3T4Character), 3377549717U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4Character_h_3075206830(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4Character_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_GP3T4Character_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
