// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HEEnemyCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHEEnemyCharacter() {}

// ********** Begin Cross Module References ********************************************************
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeCharacter();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEEnemyCharacter();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHEEnemyCharacter_NoRegister();
HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_HauntedEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FEnemyDeathDelegate ***************************************************
struct Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
	};
#endif // WITH_METADATA

// ********** Begin Delegate FEnemyDeathDelegate constinit property declarations *******************
// ********** End Delegate FEnemyDeathDelegate constinit property declarations *********************
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_HauntedEscape, nullptr, "EnemyDeathDelegate__DelegateSignature", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FEnemyDeathDelegate_DelegateWrapper(const FMulticastScriptDelegate& EnemyDeathDelegate)
{
	EnemyDeathDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FEnemyDeathDelegate *****************************************************

// ********** Begin Class AHEEnemyCharacter Function SetChaseSpeed *********************************
struct Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Switch movement speed to chase mode\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch movement speed to chase mode" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetChaseSpeed constinit property declarations *************************
// ********** End Function SetChaseSpeed constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEEnemyCharacter, nullptr, "SetChaseSpeed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEEnemyCharacter::execSetChaseSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetChaseSpeed();
	P_NATIVE_END;
}
// ********** End Class AHEEnemyCharacter Function SetChaseSpeed ***********************************

// ********** Begin Class AHEEnemyCharacter Function SetPatrolSpeed ********************************
struct Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Switch movement speed to patrol mode.\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Switch movement speed to patrol mode." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Function SetPatrolSpeed constinit property declarations ************************
// ********** End Function SetPatrolSpeed constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AHEEnemyCharacter, nullptr, "SetPatrolSpeed", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AHEEnemyCharacter::execSetPatrolSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPatrolSpeed();
	P_NATIVE_END;
}
// ********** End Class AHEEnemyCharacter Function SetPatrolSpeed **********************************

// ********** Begin Class AHEEnemyCharacter ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHEEnemyCharacter;
UClass* AHEEnemyCharacter::GetPrivateStaticClass()
{
	using TClass = AHEEnemyCharacter;
	if (!Z_Registration_Info_UClass_AHEEnemyCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HEEnemyCharacter"),
			Z_Registration_Info_UClass_AHEEnemyCharacter.InnerSingleton,
			StaticRegisterNativesAHEEnemyCharacter,
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
	return Z_Registration_Info_UClass_AHEEnemyCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHEEnemyCharacter_NoRegister()
{
	return AHEEnemyCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHEEnemyCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base class for AI-controlled enemy characters in HauntedEscape.\n *  Subclass this in Blueprint to assign a mesh, anim blueprint, and AI Controller.\n *  Behavior is driven by an AIController + behavior tree / state tree.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacter/HEEnemyCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for AI-controlled enemy characters in HauntedEscape.\nSubclass this in Blueprint to assign a mesh, anim blueprint, and AI Controller.\nBehavior is driven by an AIController + behavior tree / state tree." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Current HP. Enemy dies when this reaches zero.\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Current HP. Enemy dies when this reaches zero." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnEnemyDeath_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Delegate broadcast when this enemy dies.\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate broadcast when this enemy dies." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RagdollCollisionProfile_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Collision profile to use when entering ragdoll on death\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision profile to use when entering ragdoll on death" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DeferredDestructionTime_MetaData[] = {
		{ "Category", "Damage" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Seconds to wait after death before destroying the actor\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Seconds to wait after death before destroying the actor" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PatrolSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Movement speeds (set on the CharacterMovementComponent at runtime)\n// Walk/patrol speed\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Movement speeds (set on the CharacterMovementComponent at runtime)\nWalk/patrol speed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChaseSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Chase/alert speed\n" },
#endif
		{ "ModuleRelativePath", "AICharacter/HEEnemyCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chase/alert speed" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHEEnemyCharacter constinit property declarations ************************
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnEnemyDeath;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RagdollCollisionProfile;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeferredDestructionTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PatrolSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ChaseSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class AHEEnemyCharacter constinit property declarations **************************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("SetChaseSpeed"), .Pointer = &AHEEnemyCharacter::execSetChaseSpeed },
		{ .NameUTF8 = UTF8TEXT("SetPatrolSpeed"), .Pointer = &AHEEnemyCharacter::execSetPatrolSpeed },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AHEEnemyCharacter_SetChaseSpeed, "SetChaseSpeed" }, // 278312906
		{ &Z_Construct_UFunction_AHEEnemyCharacter_SetPatrolSpeed, "SetPatrolSpeed" }, // 3960403397
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHEEnemyCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHEEnemyCharacter_Statics

// ********** Begin Class AHEEnemyCharacter Property Definitions ***********************************
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_OnEnemyDeath = { "OnEnemyDeath", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, OnEnemyDeath), Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnEnemyDeath_MetaData), NewProp_OnEnemyDeath_MetaData) }; // 1060044568
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_RagdollCollisionProfile = { "RagdollCollisionProfile", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, RagdollCollisionProfile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RagdollCollisionProfile_MetaData), NewProp_RagdollCollisionProfile_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_DeferredDestructionTime = { "DeferredDestructionTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, DeferredDestructionTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DeferredDestructionTime_MetaData), NewProp_DeferredDestructionTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_PatrolSpeed = { "PatrolSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, PatrolSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PatrolSpeed_MetaData), NewProp_PatrolSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_ChaseSpeed = { "ChaseSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHEEnemyCharacter, ChaseSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChaseSpeed_MetaData), NewProp_ChaseSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHEEnemyCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_OnEnemyDeath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_RagdollCollisionProfile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_DeferredDestructionTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_PatrolSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHEEnemyCharacter_Statics::NewProp_ChaseSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHEEnemyCharacter_Statics::PropPointers) < 2048);
// ********** End Class AHEEnemyCharacter Property Definitions *************************************
UObject* (*const Z_Construct_UClass_AHEEnemyCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHauntedEscapeCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHEEnemyCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHEEnemyCharacter_Statics::ClassParams = {
	&AHEEnemyCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AHEEnemyCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AHEEnemyCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHEEnemyCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHEEnemyCharacter_Statics::Class_MetaDataParams)
};
void AHEEnemyCharacter::StaticRegisterNativesAHEEnemyCharacter()
{
	UClass* Class = AHEEnemyCharacter::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_AHEEnemyCharacter_Statics::Funcs));
}
UClass* Z_Construct_UClass_AHEEnemyCharacter()
{
	if (!Z_Registration_Info_UClass_AHEEnemyCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHEEnemyCharacter.OuterSingleton, Z_Construct_UClass_AHEEnemyCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHEEnemyCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHEEnemyCharacter);
AHEEnemyCharacter::~AHEEnemyCharacter() {}
// ********** End Class AHEEnemyCharacter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h__Script_HauntedEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHEEnemyCharacter, AHEEnemyCharacter::StaticClass, TEXT("AHEEnemyCharacter"), &Z_Registration_Info_UClass_AHEEnemyCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHEEnemyCharacter), 304715875U) },
	};
}; // Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h__Script_HauntedEscape_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h__Script_HauntedEscape_3111240379{
	TEXT("/Script/HauntedEscape"),
	Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h__Script_HauntedEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_AICharacter_HEEnemyCharacter_h__Script_HauntedEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
