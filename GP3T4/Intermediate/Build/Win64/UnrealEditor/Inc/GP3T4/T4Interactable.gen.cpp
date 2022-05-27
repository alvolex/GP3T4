// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4Interactable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4Interactable() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3T4_API UClass* Z_Construct_UClass_UIsInteractable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4Interactable::execRemoveOutline)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent1);
		P_GET_PROPERTY(FIntProperty,Z_Param_I);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveOutline(Z_Param_PrimitiveComponent,Z_Param_Actor,Z_Param_PrimitiveComponent1,Z_Param_I);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AT4Interactable::execSetOutline)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_PrimitiveComponent1);
		P_GET_PROPERTY(FIntProperty,Z_Param_I);
		P_GET_UBOOL(Z_Param_bArg);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_HitResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutline(Z_Param_PrimitiveComponent,Z_Param_Actor,Z_Param_PrimitiveComponent1,Z_Param_I,Z_Param_bArg,Z_Param_Out_HitResult);
		P_NATIVE_END;
	}
	static FName NAME_AT4Interactable_ReceiveInteractWithObject = FName(TEXT("ReceiveInteractWithObject"));
	void AT4Interactable::ReceiveInteractWithObject()
	{
		ProcessEvent(FindFunctionChecked(NAME_AT4Interactable_ReceiveInteractWithObject),NULL);
	}
	void AT4Interactable::StaticRegisterNativesAT4Interactable()
	{
		UClass* Class = AT4Interactable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RemoveOutline", &AT4Interactable::execRemoveOutline },
			{ "SetOutline", &AT4Interactable::execSetOutline },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "InteractWithObject" },
		{ "ModuleRelativePath", "Interactables/T4Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Interactable, nullptr, "ReceiveInteractWithObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics
	{
		struct T4Interactable_eventRemoveOutline_Parms
		{
			UPrimitiveComponent* PrimitiveComponent;
			AActor* Actor;
			UPrimitiveComponent* PrimitiveComponent1;
			int32 I;
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventRemoveOutline_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventRemoveOutline_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent1 = { "PrimitiveComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventRemoveOutline_Parms, PrimitiveComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent1_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventRemoveOutline_Parms, I), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_PrimitiveComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::NewProp_I,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Interactable, nullptr, "RemoveOutline", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::T4Interactable_eventRemoveOutline_Parms), Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Interactable_RemoveOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Interactable_RemoveOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AT4Interactable_SetOutline_Statics
	{
		struct T4Interactable_eventSetOutline_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventSetOutline_Parms, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventSetOutline_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent1_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent1 = { "PrimitiveComponent1", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventSetOutline_Parms, PrimitiveComponent1), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent1_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent1_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventSetOutline_Parms, I), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_bArg_SetBit(void* Obj)
	{
		((T4Interactable_eventSetOutline_Parms*)Obj)->bArg = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_bArg = { "bArg", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(T4Interactable_eventSetOutline_Parms), &Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_bArg_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_HitResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_HitResult = { "HitResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4Interactable_eventSetOutline_Parms, HitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_HitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_HitResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_PrimitiveComponent1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_I,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_bArg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::NewProp_HitResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4Interactable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4Interactable, nullptr, "SetOutline", nullptr, nullptr, sizeof(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::T4Interactable_eventSetOutline_Parms), Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4Interactable_SetOutline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4Interactable_SetOutline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4Interactable);
	UClass* Z_Construct_UClass_AT4Interactable_NoRegister()
	{
		return AT4Interactable::StaticClass();
	}
	struct Z_Construct_UClass_AT4Interactable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldGetOutlined_MetaData[];
#endif
		static void NewProp_bShouldGetOutlined_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldGetOutlined;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4Interactable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4Interactable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4Interactable_ReceiveInteractWithObject, "ReceiveInteractWithObject" }, // 2017166291
		{ &Z_Construct_UFunction_AT4Interactable_RemoveOutline, "RemoveOutline" }, // 1263697298
		{ &Z_Construct_UFunction_AT4Interactable_SetOutline, "SetOutline" }, // 1157184859
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Interactable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4Interactable.h" },
		{ "ModuleRelativePath", "Interactables/T4Interactable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined_MetaData[] = {
		{ "Category", "T4Interactable" },
		{ "Comment", "//UPROPERTY(VisibleAnywhere, BlueprintReadOnly)\n//class USphereComponent* OutlineArea;\n" },
		{ "ModuleRelativePath", "Interactables/T4Interactable.h" },
		{ "ToolTip", "UPROPERTY(VisibleAnywhere, BlueprintReadOnly)\nclass USphereComponent* OutlineArea;" },
	};
#endif
	void Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined_SetBit(void* Obj)
	{
		((AT4Interactable*)Obj)->bShouldGetOutlined = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined = { "bShouldGetOutlined", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4Interactable), &Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4Interactable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4Interactable_Statics::NewProp_bShouldGetOutlined,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AT4Interactable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UIsInteractable_NoRegister, (int32)VTABLE_OFFSET(AT4Interactable, IIsInteractable), false },  // 3928601144
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4Interactable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4Interactable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4Interactable_Statics::ClassParams = {
		&AT4Interactable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4Interactable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4Interactable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AT4Interactable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4Interactable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4Interactable()
	{
		if (!Z_Registration_Info_UClass_AT4Interactable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4Interactable.OuterSingleton, Z_Construct_UClass_AT4Interactable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4Interactable.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4Interactable>()
	{
		return AT4Interactable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4Interactable);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Interactable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Interactable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4Interactable, AT4Interactable::StaticClass, TEXT("AT4Interactable"), &Z_Registration_Info_UClass_AT4Interactable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4Interactable), 2366508487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Interactable_h_3352489831(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Interactable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4Interactable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
