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
#ifdef GP3T4_T4Meteorite_generated_h
#error "T4Meteorite.generated.h already included, missing '#pragma once' in T4Meteorite.h"
#endif
#define GP3T4_T4Meteorite_generated_h

#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetAgent); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execCalculateToStayInRadius); \
	DECLARE_FUNCTION(execCalculateSeparation); \
	DECLARE_FUNCTION(execCalculateCohesion); \
	DECLARE_FUNCTION(execCalculateAlignment); \
	DECLARE_FUNCTION(execDoFlockingMovement);


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetAgent); \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execCalculateToStayInRadius); \
	DECLARE_FUNCTION(execCalculateSeparation); \
	DECLARE_FUNCTION(execCalculateCohesion); \
	DECLARE_FUNCTION(execCalculateAlignment); \
	DECLARE_FUNCTION(execDoFlockingMovement);


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_EVENT_PARMS
#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_CALLBACK_WRAPPERS
#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4Meteorite(); \
	friend struct Z_Construct_UClass_AT4Meteorite_Statics; \
public: \
	DECLARE_CLASS(AT4Meteorite, AT4Interactable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4Meteorite)


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_INCLASS \
private: \
	static void StaticRegisterNativesAT4Meteorite(); \
	friend struct Z_Construct_UClass_AT4Meteorite_Statics; \
public: \
	DECLARE_CLASS(AT4Meteorite, AT4Interactable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4Meteorite)


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4Meteorite(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4Meteorite) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4Meteorite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4Meteorite); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4Meteorite(AT4Meteorite&&); \
	NO_API AT4Meteorite(const AT4Meteorite&); \
public:


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4Meteorite(AT4Meteorite&&); \
	NO_API AT4Meteorite(const AT4Meteorite&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4Meteorite); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4Meteorite); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT4Meteorite)


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_22_PROLOG \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_EVENT_PARMS


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_INCLASS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AT4Meteorite>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_Interactables_T4Meteorite_h


#define FOREACH_ENUM_EMETEORITESTATE(op) \
	op(EMeteoriteState::FlockingState) \
	op(EMeteoriteState::PickedUpState) \
	op(EMeteoriteState::ShootingState) 

enum class EMeteoriteState : uint8;
template<> GP3T4_API UEnum* StaticEnum<EMeteoriteState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
