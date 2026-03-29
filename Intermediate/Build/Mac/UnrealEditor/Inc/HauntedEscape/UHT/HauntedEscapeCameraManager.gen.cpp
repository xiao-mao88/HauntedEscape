// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HauntedEscapeCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHauntedEscapeCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeCameraManager();
HAUNTEDESCAPE_API UClass* Z_Construct_UClass_AHauntedEscapeCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_HauntedEscape();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHauntedEscapeCameraManager **********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHauntedEscapeCameraManager;
UClass* AHauntedEscapeCameraManager::GetPrivateStaticClass()
{
	using TClass = AHauntedEscapeCameraManager;
	if (!Z_Registration_Info_UClass_AHauntedEscapeCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("HauntedEscapeCameraManager"),
			Z_Registration_Info_UClass_AHauntedEscapeCameraManager.InnerSingleton,
			StaticRegisterNativesAHauntedEscapeCameraManager,
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
	return Z_Registration_Info_UClass_AHauntedEscapeCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AHauntedEscapeCameraManager_NoRegister()
{
	return AHauntedEscapeCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHauntedEscapeCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "HauntedEscapeCameraManager.h" },
		{ "ModuleRelativePath", "HauntedEscapeCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHauntedEscapeCameraManager constinit property declarations **************
// ********** End Class AHauntedEscapeCameraManager constinit property declarations ****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHauntedEscapeCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHauntedEscapeCameraManager_Statics
UObject* (*const Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_HauntedEscape,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::ClassParams = {
	&AHauntedEscapeCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::Class_MetaDataParams)
};
void AHauntedEscapeCameraManager::StaticRegisterNativesAHauntedEscapeCameraManager()
{
}
UClass* Z_Construct_UClass_AHauntedEscapeCameraManager()
{
	if (!Z_Registration_Info_UClass_AHauntedEscapeCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHauntedEscapeCameraManager.OuterSingleton, Z_Construct_UClass_AHauntedEscapeCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHauntedEscapeCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHauntedEscapeCameraManager);
AHauntedEscapeCameraManager::~AHauntedEscapeCameraManager() {}
// ********** End Class AHauntedEscapeCameraManager ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_laurenli_Documents_HauntedEscape_Source_HauntedEscape_HauntedEscapeCameraManager_h__Script_HauntedEscape_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHauntedEscapeCameraManager, AHauntedEscapeCameraManager::StaticClass, TEXT("AHauntedEscapeCameraManager"), &Z_Registration_Info_UClass_AHauntedEscapeCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHauntedEscapeCameraManager), 1323115409U) },
	};
}; // Z_CompiledInDeferFile_FID_laurenli_Documents_HauntedEscape_Source_HauntedEscape_HauntedEscapeCameraManager_h__Script_HauntedEscape_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_laurenli_Documents_HauntedEscape_Source_HauntedEscape_HauntedEscapeCameraManager_h__Script_HauntedEscape_3542435956{
	TEXT("/Script/HauntedEscape"),
	Z_CompiledInDeferFile_FID_laurenli_Documents_HauntedEscape_Source_HauntedEscape_HauntedEscapeCameraManager_h__Script_HauntedEscape_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_laurenli_Documents_HauntedEscape_Source_HauntedEscape_HauntedEscapeCameraManager_h__Script_HauntedEscape_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
