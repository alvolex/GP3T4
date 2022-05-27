// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Triggers/T4TriggerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4TriggerBase() {}
// Cross Module References
	GP3T4_API UScriptStruct* Z_Construct_UScriptStruct_FActorInfo();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4TriggerBase_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4TriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4IsOverlapping_NoRegister();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorInfo;
class UScriptStruct* FActorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorInfo, Z_Construct_UPackage__Script_GP3T4(), TEXT("ActorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ActorInfo.OuterSingleton;
}
template<> GP3T4_API UScriptStruct* StaticStruct<FActorInfo>()
{
	return FActorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSingleUse_MetaData[];
#endif
		static void NewProp_bIsSingleUse_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSingleUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasBeenUsed_MetaData[];
#endif
		static void NewProp_bHasBeenUsed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasBeenUsed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_TargetActor_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorInfo, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_TargetActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_TargetActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse_MetaData[] = {
		{ "Category", "ActorInfo" },
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse_SetBit(void* Obj)
	{
		((FActorInfo*)Obj)->bIsSingleUse = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse = { "bIsSingleUse", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorInfo), &Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed_MetaData[] = {
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed_SetBit(void* Obj)
	{
		((FActorInfo*)Obj)->bHasBeenUsed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed = { "bHasBeenUsed", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorInfo), &Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_TargetActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bIsSingleUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorInfo_Statics::NewProp_bHasBeenUsed,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
		nullptr,
		&NewStructOps,
		"ActorInfo",
		sizeof(FActorInfo),
		alignof(FActorInfo),
		Z_Construct_UScriptStruct_FActorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorInfo.InnerSingleton, Z_Construct_UScriptStruct_FActorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorInfo.InnerSingleton;
	}
	DEFINE_FUNCTION(AT4TriggerBase::execOnBeginOverlap)
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
	void AT4TriggerBase::StaticRegisterNativesAT4TriggerBase()
	{
		UClass* Class = AT4TriggerBase::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBeginOverlap", &AT4TriggerBase::execOnBeginOverlap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics
	{
		struct T4TriggerBase_eventOnBeginOverlap_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4TriggerBase_eventOnBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4TriggerBase_eventOnBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4TriggerBase_eventOnBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4TriggerBase_eventOnBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((T4TriggerBase_eventOnBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4TriggerBase_eventOnBeginOverlap_Parms), &Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4TriggerBase_eventOnBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_SweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OverlappedComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4TriggerBase, nullptr, "OnBeginOverlap", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::T4TriggerBase_eventOnBeginOverlap_Parms), Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4TriggerBase);
	UClass* Z_Construct_UClass_AT4TriggerBase_NoRegister()
	{
		return AT4TriggerBase::StaticClass();
	}
	struct Z_Construct_UClass_AT4TriggerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoxCollision_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BoxCollision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Actors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4TriggerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4TriggerBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4TriggerBase_OnBeginOverlap, "OnBeginOverlap" }, // 2515574990
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4TriggerBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Triggers/T4TriggerBase.h" },
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_BoxCollision_MetaData[] = {
		{ "Category", "T4TriggerBase" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_BoxCollision = { "BoxCollision", nullptr, (EPropertyFlags)0x0020080000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4TriggerBase, BoxCollision), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_BoxCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_BoxCollision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FActorInfo, METADATA_PARAMS(nullptr, 0) }; // 291960881
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors_MetaData[] = {
		{ "Category", "T4TriggerBase" },
		{ "ModuleRelativePath", "Triggers/T4TriggerBase.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4TriggerBase, Actors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors_MetaData)) }; // 291960881
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4TriggerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_BoxCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4TriggerBase_Statics::NewProp_Actors,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AT4TriggerBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UT4IsOverlapping_NoRegister, (int32)VTABLE_OFFSET(AT4TriggerBase, IT4IsOverlapping), false },  // 2319944977
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4TriggerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4TriggerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4TriggerBase_Statics::ClassParams = {
		&AT4TriggerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4TriggerBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4TriggerBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4TriggerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4TriggerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4TriggerBase()
	{
		if (!Z_Registration_Info_UClass_AT4TriggerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4TriggerBase.OuterSingleton, Z_Construct_UClass_AT4TriggerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4TriggerBase.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4TriggerBase>()
	{
		return AT4TriggerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4TriggerBase);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ScriptStructInfo[] = {
		{ FActorInfo::StaticStruct, Z_Construct_UScriptStruct_FActorInfo_Statics::NewStructOps, TEXT("ActorInfo"), &Z_Registration_Info_UScriptStruct_ActorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorInfo), 291960881U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4TriggerBase, AT4TriggerBase::StaticClass, TEXT("AT4TriggerBase"), &Z_Registration_Info_UClass_AT4TriggerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4TriggerBase), 914053221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_1732367798(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
