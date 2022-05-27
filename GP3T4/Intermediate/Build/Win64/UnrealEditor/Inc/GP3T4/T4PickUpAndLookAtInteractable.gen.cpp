// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Interactables/T4PickUpAndLookAtInteractable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PickUpAndLookAtInteractable() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4PickUpAndLookAtInteractable_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4PickUpAndLookAtInteractable();
	GP3T4_API UClass* Z_Construct_UClass_AT4Interactable();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AT4PickUpAndLookAtInteractable::execUnHideObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnHideObject();
		P_NATIVE_END;
	}
	void AT4PickUpAndLookAtInteractable::StaticRegisterNativesAT4PickUpAndLookAtInteractable()
	{
		UClass* Class = AT4PickUpAndLookAtInteractable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UnHideObject", &AT4PickUpAndLookAtInteractable::execUnHideObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AT4PickUpAndLookAtInteractable, nullptr, "UnHideObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4PickUpAndLookAtInteractable);
	UClass* Z_Construct_UClass_AT4PickUpAndLookAtInteractable_NoRegister()
	{
		return AT4PickUpAndLookAtInteractable::StaticClass();
	}
	struct Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshScaleWhenPickedUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MeshScaleWhenPickedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZOffsetWhenPickedUp_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOffsetWhenPickedUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ItemMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AT4Interactable,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AT4PickUpAndLookAtInteractable_UnHideObject, "UnHideObject" }, // 4001010180
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_MeshScaleWhenPickedUp_MetaData[] = {
		{ "Category", "T4PickUpAndLookAtInteractable" },
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_MeshScaleWhenPickedUp = { "MeshScaleWhenPickedUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpAndLookAtInteractable, MeshScaleWhenPickedUp), METADATA_PARAMS(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_MeshScaleWhenPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_MeshScaleWhenPickedUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ZOffsetWhenPickedUp_MetaData[] = {
		{ "Category", "T4PickUpAndLookAtInteractable" },
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ZOffsetWhenPickedUp = { "ZOffsetWhenPickedUp", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpAndLookAtInteractable, ZOffsetWhenPickedUp), METADATA_PARAMS(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ZOffsetWhenPickedUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ZOffsetWhenPickedUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ItemMesh_MetaData[] = {
		{ "Category", "T4PickUpAndLookAtInteractable" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ItemMesh = { "ItemMesh", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpAndLookAtInteractable, ItemMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ItemMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ItemMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Interactables/T4PickUpAndLookAtInteractable.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PickUpAndLookAtInteractable, Player), Z_Construct_UClass_AGP3T4Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_Player_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_MeshScaleWhenPickedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ZOffsetWhenPickedUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_ItemMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::NewProp_Player,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PickUpAndLookAtInteractable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::ClassParams = {
		&AT4PickUpAndLookAtInteractable::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PickUpAndLookAtInteractable()
	{
		if (!Z_Registration_Info_UClass_AT4PickUpAndLookAtInteractable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4PickUpAndLookAtInteractable.OuterSingleton, Z_Construct_UClass_AT4PickUpAndLookAtInteractable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4PickUpAndLookAtInteractable.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4PickUpAndLookAtInteractable>()
	{
		return AT4PickUpAndLookAtInteractable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PickUpAndLookAtInteractable);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpAndLookAtInteractable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpAndLookAtInteractable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4PickUpAndLookAtInteractable, AT4PickUpAndLookAtInteractable::StaticClass, TEXT("AT4PickUpAndLookAtInteractable"), &Z_Registration_Info_UClass_AT4PickUpAndLookAtInteractable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4PickUpAndLookAtInteractable), 2648142451U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpAndLookAtInteractable_h_3840108777(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpAndLookAtInteractable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Interactables_T4PickUpAndLookAtInteractable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
