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
#ifdef GP3T4_T4AIColliderEvent_generated_h
#error "T4AIColliderEvent.generated.h already included, missing '#pragma once' in T4AIColliderEvent.h"
#endif
#define GP3T4_T4AIColliderEvent_generated_h

#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnEndOverlap); \
	DECLARE_FUNCTION(execOnBeginOverlap);


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4AIColliderEvent(); \
	friend struct Z_Construct_UClass_AT4AIColliderEvent_Statics; \
public: \
	DECLARE_CLASS(AT4AIColliderEvent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4AIColliderEvent)


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAT4AIColliderEvent(); \
	friend struct Z_Construct_UClass_AT4AIColliderEvent_Statics; \
public: \
	DECLARE_CLASS(AT4AIColliderEvent, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4AIColliderEvent)


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4AIColliderEvent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4AIColliderEvent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4AIColliderEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4AIColliderEvent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4AIColliderEvent(AT4AIColliderEvent&&); \
	NO_API AT4AIColliderEvent(const AT4AIColliderEvent&); \
public:


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4AIColliderEvent(AT4AIColliderEvent&&); \
	NO_API AT4AIColliderEvent(const AT4AIColliderEvent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4AIColliderEvent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4AIColliderEvent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT4AIColliderEvent)


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_11_PROLOG
#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_INCLASS \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AT4AIColliderEvent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_AI_T4AIColliderEvent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
