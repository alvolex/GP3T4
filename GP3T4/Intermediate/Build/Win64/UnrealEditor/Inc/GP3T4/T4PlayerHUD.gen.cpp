// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/HUD/T4PlayerHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PlayerHUD() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_AT4PlayerHUD_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_AT4PlayerHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4PauseMenu_NoRegister();
// End Cross Module References
	void AT4PlayerHUD::StaticRegisterNativesAT4PlayerHUD()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AT4PlayerHUD);
	UClass* Z_Construct_UClass_AT4PlayerHUD_NoRegister()
	{
		return AT4PlayerHUD::StaticClass();
	}
	struct Z_Construct_UClass_AT4PlayerHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenuClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PauseMenuClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PauseMenu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PauseMenu;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPaused_MetaData[];
#endif
		static void NewProp_bIsPaused_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPaused;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AT4PlayerHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD/T4PlayerHUD.h" },
		{ "ModuleRelativePath", "HUD/T4PlayerHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenuClass_MetaData[] = {
		{ "Category", "T4PlayerHUD" },
		{ "Comment", "/*\n\x09 * Pause menu stuff\n\x09 */" },
		{ "ModuleRelativePath", "HUD/T4PlayerHUD.h" },
		{ "ToolTip", "* Pause menu stuff" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenuClass = { "PauseMenuClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PlayerHUD, PauseMenuClass), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenuClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenuClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenu_MetaData[] = {
		{ "Category", "T4PlayerHUD" },
		{ "Comment", "//Todo Create a new PauseMenu class that we change this to\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "HUD/T4PlayerHUD.h" },
		{ "ToolTip", "Todo Create a new PauseMenu class that we change this to" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenu = { "PauseMenu", nullptr, (EPropertyFlags)0x0020080000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AT4PlayerHUD, PauseMenu), Z_Construct_UClass_UT4PauseMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenu_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused_MetaData[] = {
		{ "ModuleRelativePath", "HUD/T4PlayerHUD.h" },
	};
#endif
	void Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused_SetBit(void* Obj)
	{
		((AT4PlayerHUD*)Obj)->bIsPaused = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused = { "bIsPaused", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AT4PlayerHUD), &Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AT4PlayerHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenuClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_PauseMenu,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AT4PlayerHUD_Statics::NewProp_bIsPaused,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AT4PlayerHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AT4PlayerHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AT4PlayerHUD_Statics::ClassParams = {
		&AT4PlayerHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AT4PlayerHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerHUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AT4PlayerHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AT4PlayerHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AT4PlayerHUD()
	{
		if (!Z_Registration_Info_UClass_AT4PlayerHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AT4PlayerHUD.OuterSingleton, Z_Construct_UClass_AT4PlayerHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AT4PlayerHUD.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<AT4PlayerHUD>()
	{
		return AT4PlayerHUD::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AT4PlayerHUD);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_HUD_T4PlayerHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_HUD_T4PlayerHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AT4PlayerHUD, AT4PlayerHUD::StaticClass, TEXT("AT4PlayerHUD"), &Z_Registration_Info_UClass_AT4PlayerHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AT4PlayerHUD), 4276981551U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_HUD_T4PlayerHUD_h_4249042817(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_HUD_T4PlayerHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_HUD_T4PlayerHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
