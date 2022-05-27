// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Widgets/T4PauseMenu.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4PauseMenu() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UT4PauseMenu_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4PauseMenu();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UT4PauseMenu::execResumeGameButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResumeGameButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4PauseMenu::execQuitGameButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitGameButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4PauseMenu::execMainMenuButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MainMenuButtonClicked();
		P_NATIVE_END;
	}
	void UT4PauseMenu::StaticRegisterNativesUT4PauseMenu()
	{
		UClass* Class = UT4PauseMenu::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MainMenuButtonClicked", &UT4PauseMenu::execMainMenuButtonClicked },
			{ "QuitGameButtonClicked", &UT4PauseMenu::execQuitGameButtonClicked },
			{ "ResumeGameButtonClicked", &UT4PauseMenu::execResumeGameButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4PauseMenu, nullptr, "MainMenuButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4PauseMenu, nullptr, "QuitGameButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4PauseMenu, nullptr, "ResumeGameButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UT4PauseMenu);
	UClass* Z_Construct_UClass_UT4PauseMenu_NoRegister()
	{
		return UT4PauseMenu::StaticClass();
	}
	struct Z_Construct_UClass_UT4PauseMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MainMenuButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitGameButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResumeGameButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ResumeGameButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MainMenuLevel_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_MainMenuLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4PauseMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4PauseMenu_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4PauseMenu_MainMenuButtonClicked, "MainMenuButtonClicked" }, // 3054715768
		{ &Z_Construct_UFunction_UT4PauseMenu_QuitGameButtonClicked, "QuitGameButtonClicked" }, // 3197672609
		{ &Z_Construct_UFunction_UT4PauseMenu_ResumeGameButtonClicked, "ResumeGameButtonClicked" }, // 2258756297
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PauseMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/T4PauseMenu.h" },
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuButton = { "MainMenuButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PauseMenu, MainMenuButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_QuitGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_QuitGameButton = { "QuitGameButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PauseMenu, QuitGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_QuitGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_QuitGameButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_ResumeGameButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_ResumeGameButton = { "ResumeGameButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PauseMenu, ResumeGameButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_ResumeGameButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_ResumeGameButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuLevel_MetaData[] = {
		{ "Category", "T4PauseMenu" },
		{ "ModuleRelativePath", "Widgets/T4PauseMenu.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuLevel = { "MainMenuLevel", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4PauseMenu, MainMenuLevel), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4PauseMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_QuitGameButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_ResumeGameButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4PauseMenu_Statics::NewProp_MainMenuLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4PauseMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4PauseMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UT4PauseMenu_Statics::ClassParams = {
		&UT4PauseMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4PauseMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4PauseMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4PauseMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4PauseMenu()
	{
		if (!Z_Registration_Info_UClass_UT4PauseMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UT4PauseMenu.OuterSingleton, Z_Construct_UClass_UT4PauseMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UT4PauseMenu.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UT4PauseMenu>()
	{
		return UT4PauseMenu::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4PauseMenu);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4PauseMenu_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4PauseMenu_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UT4PauseMenu, UT4PauseMenu::StaticClass, TEXT("UT4PauseMenu"), &Z_Registration_Info_UClass_UT4PauseMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UT4PauseMenu), 3609651772U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4PauseMenu_h_2060394109(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4PauseMenu_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4PauseMenu_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
