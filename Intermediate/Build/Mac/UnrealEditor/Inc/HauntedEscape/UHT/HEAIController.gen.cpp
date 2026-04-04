// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HEAIController.h"
#include "Perception/AIPerceptionTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHEAIController() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_AAIController();
AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FAIStimulus();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEAIController();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEAIController_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHEAIController Function ClearTargetActor ********************************
struct Z_Construct_UFunction_AHEAIController_ClearTargetActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clear the current target. Also clears the Blackboard key. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clear the current target. Also clears the Blackboard key." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function ClearTargetActor constinit property declarations **********************
// ********** End Function ClearTargetActor constinit property declarations ************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_ClearTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "ClearTargetActor", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_ClearTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_ClearTargetActor_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHEAIController_ClearTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_ClearTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execClearTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTargetActor();
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function ClearTargetActor **********************************

// ********** Begin Class AHEAIController Function GetTargetActor **********************************
struct Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics
{
	struct HEAIController_eventGetTargetActor_Parms
	{
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Returns the current target, or nullptr if there is none. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current target, or nullptr if there is none." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function GetTargetActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetTargetActor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetTargetActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HEAIController_eventGetTargetActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::PropPointers) < 2048);
// ********** End Function GetTargetActor Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "GetTargetActor", 	Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::HEAIController_eventGetTargetActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::HEAIController_eventGetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHEAIController_GetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_GetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execGetTargetActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetTargetActor();
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function GetTargetActor ************************************

// ********** Begin Class AHEAIController Function OnEnemyDeath ************************************
struct Z_Construct_UFunction_AHEAIController_OnEnemyDeath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the possessed enemy dies \xe2\x80\x94 stops movement and destroys the controller. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the possessed enemy dies \xe2\x80\x94 stops movement and destroys the controller." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnEnemyDeath constinit property declarations **************************
// ********** End Function OnEnemyDeath constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_OnEnemyDeath_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "OnEnemyDeath", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnEnemyDeath_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_OnEnemyDeath_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHEAIController_OnEnemyDeath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_OnEnemyDeath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execOnEnemyDeath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnEnemyDeath();
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function OnEnemyDeath **************************************

// ********** Begin Class AHEAIController Function OnPerceptionForgotten ***************************
struct Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics
{
	struct HEAIController_eventOnPerceptionForgotten_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the perception component forgets an actor (stimulus expired). */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the perception component forgets an actor (stimulus expired)." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnPerceptionForgotten constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPerceptionForgotten constinit property declarations *******************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPerceptionForgotten Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HEAIController_eventOnPerceptionForgotten_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::PropPointers) < 2048);
// ********** End Function OnPerceptionForgotten Property Definitions ******************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "OnPerceptionForgotten", 	Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::HEAIController_eventOnPerceptionForgotten_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::HEAIController_eventOnPerceptionForgotten_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execOnPerceptionForgotten)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionForgotten(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function OnPerceptionForgotten *****************************

// ********** Begin Class AHEAIController Function OnPerceptionUpdated *****************************
struct Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics
{
	struct HEAIController_eventOnPerceptionUpdated_Parms
	{
		AActor* Actor;
		FAIStimulus Stimulus;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the perception component detects or updates awareness of an actor. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the perception component detects or updates awareness of an actor." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function OnPerceptionUpdated constinit property declarations *******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Stimulus;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function OnPerceptionUpdated constinit property declarations *********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function OnPerceptionUpdated Property Definitions ******************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HEAIController_eventOnPerceptionUpdated_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::NewProp_Stimulus = { "Stimulus", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HEAIController_eventOnPerceptionUpdated_Parms, Stimulus), Z_Construct_UScriptStruct_FAIStimulus, METADATA_PARAMS(0, nullptr) }; // 819600324
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::NewProp_Stimulus,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::PropPointers) < 2048);
// ********** End Function OnPerceptionUpdated Property Definitions ********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "OnPerceptionUpdated", 	Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::HEAIController_eventOnPerceptionUpdated_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::HEAIController_eventOnPerceptionUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execOnPerceptionUpdated)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT(FAIStimulus,Z_Param_Stimulus);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPerceptionUpdated(Z_Param_Actor,Z_Param_Stimulus);
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function OnPerceptionUpdated *******************************

// ********** Begin Class AHEAIController Function SetTargetActor **********************************
struct Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics
{
	struct HEAIController_eventSetTargetActor_Parms
	{
		AActor* NewTarget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the actor this enemy should chase/attack. Also writes to the Blackboard. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the actor this enemy should chase/attack. Also writes to the Blackboard." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetTargetActor constinit property declarations ************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewTarget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetTargetActor constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetTargetActor Property Definitions ***********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::NewProp_NewTarget = { "NewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(HEAIController_eventSetTargetActor_Parms, NewTarget), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::NewProp_NewTarget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::PropPointers) < 2048);
// ********** End Function SetTargetActor Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEAIController, nullptr, "SetTargetActor", 	Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::HEAIController_eventSetTargetActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::HEAIController_eventSetTargetActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AHEAIController_SetTargetActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEAIController_SetTargetActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEAIController::execSetTargetActor)
{
	P_GET_OBJECT(AActor,Z_Param_NewTarget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTargetActor(Z_Param_NewTarget);
	P_NATIVE_END;
}
// ********** End Class AHEAIController Function SetTargetActor ************************************

// ********** Begin Class AHEAIController **********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHEAIController;
UClass* AHEAIController::GetPrivateStaticClass()
{
	using TClass = AHEAIController;
	if (!Z_Registration_Info_UClass_AHEAIController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HEAIController"),
			Z_Registration_Info_UClass_AHEAIController.InnerSingleton,
			StaticRegisterNativesAHEAIController,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHEAIController.InnerSingleton;
}
UClass* Z_Construct_UClass_AHEAIController_NoRegister()
{
	return AHEAIController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHEAIController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base AI Controller for HauntedEscape enemy characters.\n *  Handles possession, death cleanup, perception callbacks, and target tracking.\n *  Subclass this in Blueprint to configure perception senses and assign a Behavior Tree.\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "AICharacter/HEAIController.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base AI Controller for HauntedEscape enemy characters.\nHandles possession, death cleanup, perception callbacks, and target tracking.\nSubclass this in Blueprint to configure perception senses and assign a Behavior Tree." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIPerception_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Detects other actors through sight, hearing, and other senses. Configure senses in the Blueprint subclass. */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Detects other actors through sight, hearing, and other senses. Configure senses in the Blueprint subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** The Behavior Tree to run on possession. Assign this in BP_HEAIController. */" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEAIController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Behavior Tree to run on possession. Assign this in BP_HEAIController." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHEAIController constinit property declarations **************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AIPerception;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AHEAIController constinit property declarations ****************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("ClearTargetActor"), .Pointer = &AHEAIController::execClearTargetActor },
		{ .NameUTF8 = UTF8TEXT("GetTargetActor"), .Pointer = &AHEAIController::execGetTargetActor },
		{ .NameUTF8 = UTF8TEXT("OnEnemyDeath"), .Pointer = &AHEAIController::execOnEnemyDeath },
		{ .NameUTF8 = UTF8TEXT("OnPerceptionForgotten"), .Pointer = &AHEAIController::execOnPerceptionForgotten },
		{ .NameUTF8 = UTF8TEXT("OnPerceptionUpdated"), .Pointer = &AHEAIController::execOnPerceptionUpdated },
		{ .NameUTF8 = UTF8TEXT("SetTargetActor"), .Pointer = &AHEAIController::execSetTargetActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHEAIController_ClearTargetActor, "ClearTargetActor" }, // 1081024563
		{ &Z_Construct_UFunction_AHEAIController_GetTargetActor, "GetTargetActor" }, // 164645403
		{ &Z_Construct_UFunction_AHEAIController_OnEnemyDeath, "OnEnemyDeath" }, // 805298000
		{ &Z_Construct_UFunction_AHEAIController_OnPerceptionForgotten, "OnPerceptionForgotten" }, // 1585078728
		{ &Z_Construct_UFunction_AHEAIController_OnPerceptionUpdated, "OnPerceptionUpdated" }, // 3176475961
		{ &Z_Construct_UFunction_AHEAIController_SetTargetActor, "SetTargetActor" }, // 3998703323
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHEAIController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHEAIController_Statics

// ********** Begin Class AHEAIController Property Definitions *************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHEAIController_Statics::NewProp_AIPerception = { "AIPerception", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEAIController, AIPerception), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIPerception_MetaData), NewProp_AIPerception_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHEAIController_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEAIController, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHEAIController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEAIController_Statics::NewProp_AIPerception,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEAIController_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHEAIController_Statics::PropPointers) < 2048);
// ********** End Class AHEAIController Property Definitions ***************************************
UObject* (*const Z_Construct_UClass_AHEAIController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AAIController,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHEAIController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHEAIController_Statics::ClassParams = {
	&AHEAIController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHEAIController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHEAIController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHEAIController_Statics::Class_MetaDataParams), Z_Construct_UClass_AHEAIController_Statics::Class_MetaDataParams)
};
void AHEAIController::StaticRegisterNativesAHEAIController()
{
	UClass* Class = AHEAIController::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AHEAIController_Statics::Funcs));
}
UClass* Z_Construct_UClass_AHEAIController()
{
	if (!Z_Registration_Info_UClass_AHEAIController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHEAIController.OuterSingleton, Z_Construct_UClass_AHEAIController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHEAIController.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHEAIController);
AHEAIController::~AHEAIController() {}
// ********** End Class AHEAIController ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h__Script_HauntedEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHEAIController, AHEAIController::StaticClass, TEXT("AHEAIController"), &Z_Registration_Info_UClass_AHEAIController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHEAIController), 1075967571U) },
	};
}; // Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h__Script_HauntedEscape_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h__Script_HauntedEscape_3796129050{
	TEXT("/Script/HauntedEscape"),
	Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h__Script_HauntedEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEAIController_h__Script_HauntedEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
