// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HauntedEscapeGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHauntedEscapeGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeGameMode();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHauntedEscapeGameMode ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHauntedEscapeGameMode;
UClass* AHauntedEscapeGameMode::GetPrivateStaticClass()
{
	using TClass = AHauntedEscapeGameMode;
	if (!Z_Registration_Info_UClass_AHauntedEscapeGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HauntedEscapeGameMode"),
			Z_Registration_Info_UClass_AHauntedEscapeGameMode.InnerSingleton,
			StaticRegisterNativesAHauntedEscapeGameMode,
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
	return Z_Registration_Info_UClass_AHauntedEscapeGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHauntedEscapeGameMode_NoRegister()
{
	return AHauntedEscapeGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHauntedEscapeGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "HauntedEscapeGameMode.h" },
		{ "ModuleRelativePath", "HauntedEscapeGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHauntedEscapeGameMode constinit property declarations *******************
// ********** End Class AHauntedEscapeGameMode constinit property declarations *********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHauntedEscapeGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHauntedEscapeGameMode_Statics
UObject* (*const Z_Construct_UClass_AHauntedEscapeGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedEscapeGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHauntedEscapeGameMode_Statics::ClassParams = {
	&AHauntedEscapeGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedEscapeGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHauntedEscapeGameMode_Statics::Class_MetaDataParams)
};
void AHauntedEscapeGameMode::StaticRegisterNativesAHauntedEscapeGameMode()
{
}
UClass* Z_Construct_UClass_AHauntedEscapeGameMode()
{
	if (!Z_Registration_Info_UClass_AHauntedEscapeGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHauntedEscapeGameMode.OuterSingleton, Z_Construct_UClass_AHauntedEscapeGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHauntedEscapeGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHauntedEscapeGameMode);
AHauntedEscapeGameMode::~AHauntedEscapeGameMode() {}
// ********** End Class AHauntedEscapeGameMode *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_HauntedEscapeGameMode_h__Script_HauntedEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHauntedEscapeGameMode, AHauntedEscapeGameMode::StaticClass, TEXT("AHauntedEscapeGameMode"), &Z_Registration_Info_UClass_AHauntedEscapeGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHauntedEscapeGameMode), 3671553149U) },
	};
}; // Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_HauntedEscapeGameMode_h__Script_HauntedEscape_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_HauntedEscapeGameMode_h__Script_HauntedEscape_2610374161{
	TEXT("/Script/HauntedEscape"),
	Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_HauntedEscapeGameMode_h__Script_HauntedEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_audrey_Documents_GitHub_HauntedEscape_Source_HauntedEscape_HauntedEscapeGameMode_h__Script_HauntedEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
