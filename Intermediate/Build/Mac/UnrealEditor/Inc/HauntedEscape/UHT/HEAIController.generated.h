// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICharacter/HEAIController.h"

#ifdef HAUNTEDESCAPE_HEAIController_generated_h
#error "HEAIController.generated.h already included, missing '#pragma once' in HEAIController.h"
#endif
#define HAUNTEDESCAPE_HEAIController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;

// ********** Begin Class AHEAIController **********************************************************
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPerceptionForgotten); \
	DECLARE_FUNCTION(execOnPerceptionUpdated); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execClearTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execOnEnemyDeath);


struct Z_Construct_UClass_AHEAIController_Statics;
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEAIController_NoRegister();

#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHEAIController(); \
	friend struct ::Z_Construct_UClass_AHEAIController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDESCAPE_API UClass* ::Z_Construct_UClass_AHEAIController_NoRegister(); \
public: \
	DECLARE_CLASS2(AHEAIController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedEscape"), Z_Construct_UClass_AHEAIController_NoRegister) \
	DECLARE_SERIALIZER(AHEAIController)


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHEAIController(AHEAIController&&) = delete; \
	AHEAIController(const AHEAIController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHEAIController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHEAIController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHEAIController) \
	NO_API virtual ~AHEAIController();


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_18_PROLOG
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_INCLASS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHEAIController;

// ********** End Class AHEAIController ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
