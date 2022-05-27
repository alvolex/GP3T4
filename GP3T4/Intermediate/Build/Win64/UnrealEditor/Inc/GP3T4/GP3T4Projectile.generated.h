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
#ifdef GP3T4_GP3T4Projectile_generated_h
#error "GP3T4Projectile.generated.h already included, missing '#pragma once' in GP3T4Projectile.h"
#endif
#define GP3T4_GP3T4Projectile_generated_h

#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_SPARSE_DATA
#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_EVENT_PARMS
#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_CALLBACK_WRAPPERS
#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGP3T4Projectile(); \
	friend struct Z_Construct_UClass_AGP3T4Projectile_Statics; \
public: \
	DECLARE_CLASS(AGP3T4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AGP3T4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGP3T4Projectile(); \
	friend struct Z_Construct_UClass_AGP3T4Projectile_Statics; \
public: \
	DECLARE_CLASS(AGP3T4Projectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3T4"), NO_API) \
	DECLARE_SERIALIZER(AGP3T4Projectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGP3T4Projectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGP3T4Projectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3T4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3T4Projectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3T4Projectile(AGP3T4Projectile&&); \
	NO_API AGP3T4Projectile(const AGP3T4Projectile&); \
public:


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGP3T4Projectile(AGP3T4Projectile&&); \
	NO_API AGP3T4Projectile(const AGP3T4Projectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGP3T4Projectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGP3T4Projectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGP3T4Projectile)


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_12_PROLOG \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_EVENT_PARMS


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_RPC_WRAPPERS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_INCLASS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_SPARSE_DATA \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_CALLBACK_WRAPPERS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_GP3T4_Source_GP3T4_GP3T4Projectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3T4_API UClass* StaticClass<class AGP3T4Projectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_GP3T4Projectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
