// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef GP3T4_T4AIController_generated_h
#error "T4AIController.generated.h already included, missing '#pragma once' in T4AIController.h"
#endif
#define GP3T4_T4AIController_generated_h

#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetNextPoint); \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetNextPoint); \
	DECLARE_FUNCTION(execOnPerceptionUpdated);


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAT4AIController(); \
	friend struct Z_Construct_UClass_AT4AIController_Statics; \
public: \
	DECLARE_CLASS(AT4AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4AIController)


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAT4AIController(); \
	friend struct Z_Construct_UClass_AT4AIController_Statics; \
public: \
	DECLARE_CLASS(AT4AIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AT4AIController)


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AT4AIController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AT4AIController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4AIController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4AIController(AT4AIController&&); \
	NO_API AT4AIController(const AT4AIController&); \
public:


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AT4AIController(AT4AIController&&); \
	NO_API AT4AIController(const AT4AIController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AT4AIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AT4AIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AT4AIController)


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_15_PROLOG
#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_INCLASS \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_AI_T4AIController_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AT4AIController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_AI_T4AIController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
