// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3T4_T4Timer_generated_h
#error "T4Timer.generated.h already included, missing '#pragma once' in T4Timer.h"
#endif
#define GP3T4_T4Timer_generated_h

#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execStartTimer);


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execStartTimer);


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_EVENT_PARMS
#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_CALLBACK_WRAPPERS
#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4Timer(); \
	friend struct Z_Construct_UClass_AT4Timer_Statics; \
public: \
	DECLARE_CLASS(AT4Timer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4Timer)


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_INCLASS \
private: \
	static void StaticRegisterNativesAT4Timer(); \
	friend struct Z_Construct_UClass_AT4Timer_Statics; \
public: \
	DECLARE_CLASS(AT4Timer, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4Timer)


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4Timer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4Timer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4Timer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4Timer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4Timer(AT4Timer&&); \
	NO_API AT4Timer(const AT4Timer&); \
public:


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4Timer(AT4Timer&&); \
	NO_API AT4Timer(const AT4Timer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4Timer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4Timer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT4Timer)


#define FID_GP3T4_Source_GP3T4_T4Timer_h_8_PROLOG \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_EVENT_PARMS


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_INCLASS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_T4Timer_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_T4Timer_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AT4Timer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_T4Timer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
