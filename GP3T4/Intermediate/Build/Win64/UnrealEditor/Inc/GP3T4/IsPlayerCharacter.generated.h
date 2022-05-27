// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3T4_IsPlayerCharacter_generated_h
#error "IsPlayerCharacter.generated.h already included, missing '#pragma once' in IsPlayerCharacter.h"
#endif
#define GP3T4_IsPlayerCharacter_generated_h

#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_RPC_WRAPPERS
#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsPlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsPlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsPlayerCharacter(UIsPlayerCharacter&&); \
	NO_API UIsPlayerCharacter(const UIsPlayerCharacter&); \
public:


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsPlayerCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsPlayerCharacter(UIsPlayerCharacter&&); \
	NO_API UIsPlayerCharacter(const UIsPlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsPlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsPlayerCharacter); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsPlayerCharacter)


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUIsPlayerCharacter(); \
	friend struct Z_Construct_UClass_UIsPlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(UIsPlayerCharacter, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(UIsPlayerCharacter)


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_GENERATED_UINTERFACE_BODY() \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_GENERATED_UINTERFACE_BODY() \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IIsPlayerCharacter() {} \
public: \
	typedef UIsPlayerCharacter UClassType; \
	typedef IIsPlayerCharacter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_INCLASS_IINTERFACE \
protected: \
	virtual ~IIsPlayerCharacter() {} \
public: \
	typedef UIsPlayerCharacter UClassType; \
	typedef IIsPlayerCharacter ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_8_PROLOG
#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h_11_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class UIsPlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_Interfaces_IsPlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
