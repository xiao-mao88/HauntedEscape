// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHauntedEscape_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_BulletCountUpdatedDelegate__DelegateSignature();
	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_DamagedDelegate__DelegateSignature();
	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature();
	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_PawnDeathDelegate__DelegateSignature();
	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_SprintStateChangedDelegate__DelegateSignature();
	HAUNTEDESCAPE_API UFunction* Z_Construct_UDelegateFunction_HauntedEscape_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_HauntedEscape;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_HauntedEscape()
	{
		if (!Z_Registration_Info_UPackage__Script_HauntedEscape.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_EnemyDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_HauntedEscape_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/HauntedEscape",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x62F6E695,
			0xD9640A3F,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_HauntedEscape.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_HauntedEscape.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_HauntedEscape(Z_Construct_UPackage__Script_HauntedEscape, TEXT("/Script/HauntedEscape"), Z_Registration_Info_UPackage__Script_HauntedEscape, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x62F6E695, 0xD9640A3F));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
