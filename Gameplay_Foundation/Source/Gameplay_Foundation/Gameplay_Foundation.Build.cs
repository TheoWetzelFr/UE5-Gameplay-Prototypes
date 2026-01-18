// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gameplay_Foundation : ModuleRules
{
	public Gameplay_Foundation(ReadOnlyTargetRules Target) : base(Target)
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
			"Gameplay_Foundation",
			"Gameplay_Foundation/Variant_Platforming",
			"Gameplay_Foundation/Variant_Platforming/Animation",
			"Gameplay_Foundation/Variant_Combat",
			"Gameplay_Foundation/Variant_Combat/AI",
			"Gameplay_Foundation/Variant_Combat/Animation",
			"Gameplay_Foundation/Variant_Combat/Gameplay",
			"Gameplay_Foundation/Variant_Combat/Interfaces",
			"Gameplay_Foundation/Variant_Combat/UI",
			"Gameplay_Foundation/Variant_SideScrolling",
			"Gameplay_Foundation/Variant_SideScrolling/AI",
			"Gameplay_Foundation/Variant_SideScrolling/Gameplay",
			"Gameplay_Foundation/Variant_SideScrolling/Interfaces",
			"Gameplay_Foundation/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
