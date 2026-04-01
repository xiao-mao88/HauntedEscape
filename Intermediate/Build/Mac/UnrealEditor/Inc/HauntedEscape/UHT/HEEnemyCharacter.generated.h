// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICharacter/HEEnemyCharacter.h"

#ifdef HAUNTEDESCAPE_HEEnemyCharacter_generated_h
#error "HEEnemyCharacter.generated.h already included, missing '#pragma once' in HEEnemyCharacter.h"
#endif
#define HAUNTEDESCAPE_HEEnemyCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FEnemyDeathDelegate ***************************************************
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_9_DELEGATE \
HAUNTEDESCAPE_API void FEnemyDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& EnemyDeathDelegate);


// ********** End Delegate FEnemyDeathDelegate *****************************************************

// ********** Begin Class AHEEnemyCharacter ********************************************************
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetChaseSpeed); \
	DECLARE_FUNCTION(execSetPatrolSpeed);


struct Z_Construct_UClass_AHEEnemyCharacter_Statics;
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEEnemyCharacter_NoRegister();

#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHEEnemyCharacter(); \
	friend struct ::Z_Construct_UClass_AHEEnemyCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDESCAPE_API UClass* ::Z_Construct_UClass_AHEEnemyCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHEEnemyCharacter, AHauntedEscapeCharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedEscape"), Z_Construct_UClass_AHEEnemyCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHEEnemyCharacter)


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHEEnemyCharacter(AHEEnemyCharacter&&) = delete; \
	AHEEnemyCharacter(const AHEEnemyCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHEEnemyCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHEEnemyCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHEEnemyCharacter) \
	NO_API virtual ~AHEEnemyCharacter();


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_16_PROLOG
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_INCLASS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHEEnemyCharacter;

// ********** End Class AHEEnemyCharacter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
