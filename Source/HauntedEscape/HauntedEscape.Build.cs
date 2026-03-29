// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class HauntedEscape : ModuleRules
{
	public HauntedEscape(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"HauntedEscape",
			"HauntedEscape/Variant_Horror",
			"HauntedEscape/Variant_Horror/UI",
			"HauntedEscape/Variant_Shooter",
			"HauntedEscape/Variant_Shooter/AI",
			"HauntedEscape/Variant_Shooter/UI",
			"HauntedEscape/Variant_Shooter/Weapons"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
