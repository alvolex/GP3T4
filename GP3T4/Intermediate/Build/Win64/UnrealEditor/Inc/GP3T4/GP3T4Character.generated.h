// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3T4_GP3T4Character_generated_h
#error "GP3T4Character.generated.h already included, missing '#pragma once' in GP3T4Character.h"
#endif
#define GP3T4_GP3T4Character_generated_h

#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_21_DELEGATE \
static inline void FOnUseItem_DelegateWrapper(const FMulticastScriptDelegate& OnUseItem) \
{ \
	OnUseItem.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_22_DELEGATE \
static inline void FOnRightClick_DelegateWrapper(const FMulticastScriptDelegate& OnRightClick) \
{ \
	OnRightClick.ProcessMulticastDelegate<UObject>(NULL); \
}


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLockInputAtSleep); \
	DECLARE_FUNCTION(execLockPlayerLookRotation);


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLockInputAtSleep); \
	DECLARE_FUNCTION(execLockPlayerLookRotation);


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGP3T4Character(); \
	friend struct Z_Construct_UClass_AGP3T4Character_Statics; \
public: \
	DECLARE_CLASS(AGP3T4Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AGP3T4Character) \
	virtual UObject* _getUObject() const override { return const_cast<AGP3T4Character*>(this); }


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAGP3T4Character(); \
	friend struct Z_Construct_UClass_AGP3T4Character_Statics; \
public: \
	DECLARE_CLASS(AGP3T4Character, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AGP3T4Character) \
	virtual UObject* _getUObject() const override { return const_cast<AGP3T4Character*>(this); }


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGP3T4Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGP3T4Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3T4Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3T4Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3T4Character(AGP3T4Character&&); \
	NO_API AGP3T4Character(const AGP3T4Character&); \
public:


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3T4Character(AGP3T4Character&&); \
	NO_API AGP3T4Character(const AGP3T4Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3T4Character); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3T4Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGP3T4Character)


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_24_PROLOG
#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_INCLASS \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_GP3T4Character_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AGP3T4Character>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_GP3T4Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
