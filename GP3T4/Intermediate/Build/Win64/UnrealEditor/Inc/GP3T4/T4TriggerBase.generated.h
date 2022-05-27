// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef GP3T4_T4TriggerBase_generated_h
#error "T4TriggerBase.generated.h already included, missing '#pragma once' in T4TriggerBase.h"
#endif
#define GP3T4_T4TriggerBase_generated_h

#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorInfo_Statics; \
	GP3T4_API static class UScriptStruct* StaticStruct();


template<> GP3T4_API UScriptStruct* StaticStruct<struct FActorInfo>();

#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4TriggerBase(); \
	friend struct Z_Construct_UClass_AT4TriggerBase_Statics; \
public: \
	DECLARE_CLASS(AT4TriggerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4TriggerBase) \
	virtual UObject* _getUObject() const override { return const_cast<AT4TriggerBase*>(this); }


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_INCLASS \
private: \
	static void StaticRegisterNativesAT4TriggerBase(); \
	friend struct Z_Construct_UClass_AT4TriggerBase_Statics; \
public: \
	DECLARE_CLASS(AT4TriggerBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4TriggerBase) \
	virtual UObject* _getUObject() const override { return const_cast<AT4TriggerBase*>(this); }


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4TriggerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4TriggerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4TriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4TriggerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4TriggerBase(AT4TriggerBase&&); \
	NO_API AT4TriggerBase(const AT4TriggerBase&); \
public:


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4TriggerBase(AT4TriggerBase&&); \
	NO_API AT4TriggerBase(const AT4TriggerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4TriggerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4TriggerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT4TriggerBase)


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_32_PROLOG
#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_INCLASS \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h_35_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AT4TriggerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_Triggers_T4TriggerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
