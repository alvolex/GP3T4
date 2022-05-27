// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3T4/Widgets/T4MenuWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeT4MenuWidget() {}
// Cross Module References
	GP3T4_API UClass* Z_Construct_UClass_UT4MenuWidget_NoRegister();
	GP3T4_API UClass* Z_Construct_UClass_UT4MenuWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3T4();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UT4MenuWidget::execQuitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->QuitButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4MenuWidget::execStartButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UT4MenuWidget::execSetupMenu)
	{
		P_GET_OBJECT(UWorld,Z_Param_LevelToLoadOnStartButtonClicked);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupMenu(Z_Param_LevelToLoadOnStartButtonClicked);
		P_NATIVE_END;
	}
	void UT4MenuWidget::StaticRegisterNativesUT4MenuWidget()
	{
		UClass* Class = UT4MenuWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "QuitButtonClicked", &UT4MenuWidget::execQuitButtonClicked },
			{ "SetupMenu", &UT4MenuWidget::execSetupMenu },
			{ "StartButtonClicked", &UT4MenuWidget::execStartButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4MenuWidget, nullptr, "QuitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics
	{
		struct T4MenuWidget_eventSetupMenu_Parms
		{
			UWorld* LevelToLoadOnStartButtonClicked;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelToLoadOnStartButtonClicked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::NewProp_LevelToLoadOnStartButtonClicked = { "LevelToLoadOnStartButtonClicked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(T4MenuWidget_eventSetupMenu_Parms, LevelToLoadOnStartButtonClicked), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::NewProp_LevelToLoadOnStartButtonClicked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4MenuWidget, nullptr, "SetupMenu", nullptr, nullptr, sizeof(Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::T4MenuWidget_eventSetupMenu_Parms), Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4MenuWidget_SetupMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4MenuWidget_SetupMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UT4MenuWidget, nullptr, "StartButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UT4MenuWidget);
	UClass* Z_Construct_UClass_UT4MenuWidget_NoRegister()
	{
		return UT4MenuWidget::StaticClass();
	}
	struct Z_Construct_UClass_UT4MenuWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_StartButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QuitButton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QuitButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelToChangeTo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelToChangeTo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UT4MenuWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3T4,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UT4MenuWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UT4MenuWidget_QuitButtonClicked, "QuitButtonClicked" }, // 473098303
		{ &Z_Construct_UFunction_UT4MenuWidget_SetupMenu, "SetupMenu" }, // 1012626364
		{ &Z_Construct_UFunction_UT4MenuWidget_StartButtonClicked, "StartButtonClicked" }, // 1335733381
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MenuWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/T4MenuWidget.h" },
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_StartButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_StartButton = { "StartButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MenuWidget, StartButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_StartButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_StartButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_QuitButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_QuitButton = { "QuitButton", nullptr, (EPropertyFlags)0x0040000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MenuWidget, QuitButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_QuitButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_QuitButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_LevelToChangeTo_MetaData[] = {
		{ "ModuleRelativePath", "Widgets/T4MenuWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_LevelToChangeTo = { "LevelToChangeTo", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UT4MenuWidget, LevelToChangeTo), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_LevelToChangeTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_LevelToChangeTo_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UT4MenuWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_StartButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_QuitButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UT4MenuWidget_Statics::NewProp_LevelToChangeTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UT4MenuWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UT4MenuWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UT4MenuWidget_Statics::ClassParams = {
		&UT4MenuWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UT4MenuWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UT4MenuWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UT4MenuWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UT4MenuWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UT4MenuWidget()
	{
		if (!Z_Registration_Info_UClass_UT4MenuWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UT4MenuWidget.OuterSingleton, Z_Construct_UClass_UT4MenuWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UT4MenuWidget.OuterSingleton;
	}
	template<> GP3T4_API UClass* StaticClass<UT4MenuWidget>()
	{
		return UT4MenuWidget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UT4MenuWidget);
	struct Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4MenuWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4MenuWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UT4MenuWidget, UT4MenuWidget::StaticClass, TEXT("UT4MenuWidget"), &Z_Registration_Info_UClass_UT4MenuWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UT4MenuWidget), 3409947674U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4MenuWidget_h_3263193910(TEXT("/Script/GP3T4"),
		Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4MenuWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GP3T4_Source_GP3T4_Widgets_T4MenuWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
