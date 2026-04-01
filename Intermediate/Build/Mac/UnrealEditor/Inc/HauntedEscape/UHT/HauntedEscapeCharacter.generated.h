// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Player/HauntedEscapeCharacter.h"

#ifdef HAUNTEDESCAPE_HauntedEscapeCharacter_generated_h
#error "HauntedEscapeCharacter.generated.h already included, missing '#pragma once' in HauntedEscapeCharacter.h"
#endif
#define HAUNTEDESCAPE_HauntedEscapeCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AHauntedEscapeCharacter **************************************************
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


struct Z_Construct_UClass_AHauntedEscapeCharacter_Statics;
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeCharacter_NoRegister();

#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHauntedEscapeCharacter(); \
	friend struct ::Z_Construct_UClass_AHauntedEscapeCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend HAUNTEDESCAPE_API UClass* ::Z_Construct_UClass_AHauntedEscapeCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AHauntedEscapeCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/HauntedEscape"), Z_Construct_UClass_AHauntedEscapeCharacter_NoRegister) \
	DECLARE_SERIALIZER(AHauntedEscapeCharacter)


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AHauntedEscapeCharacter(AHauntedEscapeCharacter&&) = delete; \
	AHauntedEscapeCharacter(const AHauntedEscapeCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHauntedEscapeCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHauntedEscapeCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AHauntedEscapeCharacter) \
	NO_API virtual ~AHauntedEscapeCharacter();


#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_21_PROLOG
#define FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AHauntedEscapeCharacter;

// ********** End Class AHauntedEscapeCharacter ****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_Player_HauntedEscapeCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
