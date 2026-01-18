// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "firstStepCharacter.h"

#ifdef FIRSTSTEP_firstStepCharacter_generated_h
#error "firstStepCharacter.generated.h already included, missing '#pragma once' in firstStepCharacter.h"
#endif
#define FIRSTSTEP_firstStepCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AfirstStepCharacter ******************************************************
#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepCharacter_NoRegister();

#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfirstStepCharacter(); \
	friend struct Z_Construct_UClass_AfirstStepCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AfirstStepCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstStep"), Z_Construct_UClass_AfirstStepCharacter_NoRegister) \
	DECLARE_SERIALIZER(AfirstStepCharacter)


#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AfirstStepCharacter(AfirstStepCharacter&&) = delete; \
	AfirstStepCharacter(const AfirstStepCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfirstStepCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfirstStepCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AfirstStepCharacter) \
	NO_API virtual ~AfirstStepCharacter();


#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_21_PROLOG
#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AfirstStepCharacter;

// ********** End Class AfirstStepCharacter ********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
