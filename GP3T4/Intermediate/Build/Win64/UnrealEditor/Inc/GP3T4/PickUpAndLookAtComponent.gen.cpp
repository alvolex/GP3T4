// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/PlayerComponents/PickUpAndLookAtComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickUpAndLookAtComponent() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UPickUpAndLookAtComponent_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UPickUpAndLookAtComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	GP3T4_API UClass* Z_Construct_UClass_AGP3T4Character_NoRegister();
	GP3T4_API UEnum* Z_Construct_UEnum_GP3T4_EPlayerCondition();
	GP3T4_API UClass* Z_Construct_UClass_AT4PickUpAndLookAtInteractable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
// End Cross Module References
	void UPickUpAndLookAtComponent::StaticRegisterNativesUPickUpAndLookAtComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPickUpAndLookAtComponent);
	UClass* Z_Construct_UClass_UPickUpAndLookAtComponent_NoRegister()
	{
		return UPickUpAndLookAtComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPickUpAndLookAtComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Character_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentPlayerState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentPlayerState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentPlayerState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PickedUpItem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickedUpItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraManger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraManger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
		{ "ModuleRelativePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_Character_MetaData[] = {
		{ "ModuleRelativePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_Character = { "Character", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickUpAndLookAtComponent, Character), Z_Construct_UClass_AGP3T4Character_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_Character_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_Character_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState_MetaData[] = {
		{ "ModuleRelativePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState = { "CurrentPlayerState", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickUpAndLookAtComponent, CurrentPlayerState), Z_Construct_UEnum_GP3T4_EPlayerCondition, METADATA_PARAMS(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState_MetaData)) }; // 2484652431
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_PickedUpItem_MetaData[] = {
		{ "Category", "PickUpAndLookAtComponent" },
		{ "ModuleRelativePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_PickedUpItem = { "PickedUpItem", nullptr, (EPropertyFlags)0x0040000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickUpAndLookAtComponent, PickedUpItem), Z_Construct_UClass_AT4PickUpAndLookAtInteractable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_PickedUpItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_PickedUpItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CameraManger_MetaData[] = {
		{ "ModuleRelativePath", "PlayerComponents/PickUpAndLookAtComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CameraManger = { "CameraManger", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPickUpAndLookAtComponent, CameraManger), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CameraManger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CameraManger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_Character,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CurrentPlayerState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_PickedUpItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::NewProp_CameraManger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPickUpAndLookAtComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::ClassParams = {
		&UPickUpAndLookAtComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPickUpAndLookAtComponent()
	{
		if (!Z_Registration_Info_UClass_UPickUpAndLookAtComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPickUpAndLookAtComponent.OuterSingleton, Z_Construct_UClass_UPickUpAndLookAtComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPickUpAndLookAtComponent.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UPickUpAndLookAtComponent>()
	{
		return UPickUpAndLookAtComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPickUpAndLookAtComponent);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_PlayerComponents_PickUpAndLookAtComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_PlayerComponents_PickUpAndLookAtComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPickUpAndLookAtComponent, UPickUpAndLookAtComponent::StaticClass, TEXT("UPickUpAndLookAtComponent"), &Z_Registration_Info_UClass_UPickUpAndLookAtComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPickUpAndLookAtComponent), 572478587U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_PlayerComponents_PickUpAndLookAtComponent_h_544539835(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_PlayerComponents_PickUpAndLookAtComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_PlayerComponents_PickUpAndLookAtComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
