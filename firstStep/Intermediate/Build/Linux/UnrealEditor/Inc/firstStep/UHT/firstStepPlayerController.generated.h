// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "firstStepPlayerController.h"

#ifdef FIRSTSTEP_firstStepPlayerController_generated_h
#error "firstStepPlayerController.generated.h already included, missing '#pragma once' in firstStepPlayerController.h"
#endif
#define FIRSTSTEP_firstStepPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AfirstStepPlayerController ***********************************************
FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepPlayerController_NoRegister();

#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAfirstStepPlayerController(); \
	friend struct Z_Construct_UClass_AfirstStepPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FIRSTSTEP_API UClass* Z_Construct_UClass_AfirstStepPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AfirstStepPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/firstStep"), Z_Construct_UClass_AfirstStepPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AfirstStepPlayerController)


#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AfirstStepPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AfirstStepPlayerController(AfirstStepPlayerController&&) = delete; \
	AfirstStepPlayerController(const AfirstStepPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AfirstStepPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AfirstStepPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AfirstStepPlayerController) \
	NO_API virtual ~AfirstStepPlayerController();


#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_16_PROLOG
#define FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AfirstStepPlayerController;

// ********** End Class AfirstStepPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Dev_Projet_1_UE5_Gameplay_Prototypes_firstStep_Source_firstStep_firstStepPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
