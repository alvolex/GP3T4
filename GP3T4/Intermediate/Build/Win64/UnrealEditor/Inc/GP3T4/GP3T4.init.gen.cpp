// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3T4_init() {}
	GP3T4_API UFunction* Z_Construct_UDelegateFunction_GP3T4_OnPickUp__DelegateSignature();
	GP3T4_API UFunction* Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature();
	GP3T4_API UFunction* Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GP3T4;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GP3T4()
	{
		if (!Z_Registration_Info_UPackage__Script_GP3T4.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3T4_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3T4_OnRightClick__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GP3T4_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GP3T4",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x947D0D1C,
				0xF6176643,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GP3T4.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GP3T4.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GP3T4(Z_Construct_UPackage__Script_GP3T4, TEXT("/Script/GP3T4"), Z_Registration_Info_UPackage__Script_GP3T4, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x947D0D1C, 0xF6176643));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
