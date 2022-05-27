// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/AI/T4AIColliderEvent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4AIColliderEvent() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4AIColliderEvent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4AIColliderEvent();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3T4_API UClass* Z_Construct_UClass_AT4AIBaseCharacter_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4AIColliderEvent::execOnEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEndOverlap(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4AIColliderEvent::execOnBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AT4AIColliderEvent::StaticRegisterNativesAT4AIColliderEvent()
	{
		UClass* Class = AT4AIColliderEvent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AT4AIColliderEvent::execOnBeginOverlap },
			{ "OnEndOverlap", &AT4AIColliderEvent::execOnEndOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics
	{
		struct T4AIColliderEvent_eventOnBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((T4AIColliderEvent_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4AIColliderEvent_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4AIColliderEvent, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::T4AIColliderEvent_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics
	{
		struct T4AIColliderEvent_eventOnEndOverlap_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4AIColliderEvent_eventOnEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4AIColliderEvent, nullptr, "OnEndOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::T4AIColliderEvent_eventOnEndOverlap_Parms), Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4AIColliderEvent);
	UClass* Z_Construct_UClass_AT4AIColliderEvent_NoRegister()
	{
		return AT4AIColliderEvent::StaticClass();
	}
	struct Z_Construct_UClass_AT4AIColliderEvent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollider_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollider;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AIClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AIClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TriggerName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TriggerName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBoolValue_MetaData[];
#endif
		static void NewProp_bBoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBoolValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4AIColliderEvent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4AIColliderEvent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4AIColliderEvent_OnBeginOverlap, "OnBeginOverlap" }, // 1665789676
		{ &Z_Construct_UFunction_AT4AIColliderEvent_OnEndOverlap, "OnEndOverlap" }, // 3166981550
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIColliderEvent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/T4AIColliderEvent.h" },
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_BoxCollider_MetaData[] = {
		{ "Category", "T4AIColliderEvent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_BoxCollider = { "BoxCollider", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIColliderEvent, BoxCollider), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_BoxCollider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_BoxCollider_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_AIClass_MetaData[] = {
		{ "Category", "AI Search" },
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_AIClass = { "AIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIColliderEvent, AIClass), Z_Construct_UClass_AT4AIBaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_AIClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_AIClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_TriggerName_MetaData[] = {
		{ "Category", "AI Overlap Event" },
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_TriggerName = { "TriggerName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4AIColliderEvent, TriggerName), METADATA_PARAMS(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_TriggerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_TriggerName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue_MetaData[] = {
		{ "Category", "AI Overlap Event" },
		{ "ModuleRelativePath", "AI/T4AIColliderEvent.h" },
	};
#endif
	void Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue_SetBit(void* Obj)
	{
		((AT4AIColliderEvent*)Obj)->bBoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue = { "bBoolValue", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4AIColliderEvent), &Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4AIColliderEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_BoxCollider,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_AIClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_TriggerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4AIColliderEvent_Statics::NewProp_bBoolValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4AIColliderEvent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4AIColliderEvent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4AIColliderEvent_Statics::ClassParams = {
		&AT4AIColliderEvent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4AIColliderEvent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4AIColliderEvent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4AIColliderEvent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4AIColliderEvent()
	{
		if (!Z_Registration_Info_UClass_AT4AIColliderEvent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4AIColliderEvent.OuterSingleton, Z_Construct_UClass_AT4AIColliderEvent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4AIColliderEvent.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4AIColliderEvent>()
	{
		return AT4AIColliderEvent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4AIColliderEvent);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4AIColliderEvent, AT4AIColliderEvent::StaticClass, TEXT("AT4AIColliderEvent"), &Z_Registration_Info_UClass_AT4AIColliderEvent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4AIColliderEvent), 936610967U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_280756033(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
