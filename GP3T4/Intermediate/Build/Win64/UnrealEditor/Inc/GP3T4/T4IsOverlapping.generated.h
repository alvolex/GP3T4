// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3T4_T4IsOverlapping_generated_h
#error "T4IsOverlapping.generated.h already included, missing '#pragma once' in T4IsOverlapping.h"
#endif
#define GP3T4_T4IsOverlapping_generated_h

#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_RPC_WRAPPERS \
	virtual void OnOverlapTriggered_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnOverlapTriggered);


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnOverlapTriggered_Implementation() {}; \
 \
	DECLARE_FUNCTION(execOnOverlapTriggered);


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_EVENT_PARMS
#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_CALLBACK_WRAPPERS
#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3T4_API UT4IsOverlapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4IsOverlapping) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3T4_API, UT4IsOverlapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4IsOverlapping); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3T4_API UT4IsOverlapping(UT4IsOverlapping&&); \
	GP3T4_API UT4IsOverlapping(const UT4IsOverlapping&); \
public:


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	GP3T4_API UT4IsOverlapping(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	GP3T4_API UT4IsOverlapping(UT4IsOverlapping&&); \
	GP3T4_API UT4IsOverlapping(const UT4IsOverlapping&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(GP3T4_API, UT4IsOverlapping); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UT4IsOverlapping); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UT4IsOverlapping)


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUT4IsOverlapping(); \
	friend struct Z_Construct_UClass_UT4IsOverlapping_Statics; \
public: \
	DECLARE_CLASS(UT4IsOverlapping, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GP3T4"), GP3T4_API) \
	DECLARE_SERIALIZER(UT4IsOverlapping)


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_GENERATED_UINTERFACE_BODY() \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_GENERATED_UINTERFACE_BODY() \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IT4IsOverlapping() {} \
public: \
	typedef UT4IsOverlapping UClassType; \
	typedef IT4IsOverlapping ThisClass; \
	static void Execute_OnOverlapTriggered(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IT4IsOverlapping() {} \
public: \
	typedef UT4IsOverlapping UClassType; \
	typedef IT4IsOverlapping ThisClass; \
	static void Execute_OnOverlapTriggered(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_10_PROLOG \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_EVENT_PARMS


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class UT4IsOverlapping>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_Interfaces_T4IsOverlapping_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
