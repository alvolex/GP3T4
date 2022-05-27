// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3T4_PlayerCondition_generated_h
#error "PlayerCondition.generated.h already included, missing '#pragma once' in PlayerCondition.h"
#endif
#define GP3T4_PlayerCondition_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GP3T4_Source_GP3T4_Enums_PlayerCondition_h


#define FOREACH_ENUM_EPLAYERCONDITION(op) \
	op(EPlayerCondition::EPC_Moving) \
	op(EPlayerCondition::EPC_Inspecting) 

enum class EPlayerCondition : uint8;
template<> GP3T4_API UEnum* StaticEnum<EPlayerCondition>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
