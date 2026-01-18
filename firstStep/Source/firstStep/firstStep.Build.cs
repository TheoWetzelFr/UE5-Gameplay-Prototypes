// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class firstStep : ModuleRules
{
	public firstStep(ReadOnlyTargetRules Target) : base(Target)
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
			"firstStep",
			"firstStep/Variant_Platforming",
			"firstStep/Variant_Platforming/Animation",
			"firstStep/Variant_Combat",
			"firstStep/Variant_Combat/AI",
			"firstStep/Variant_Combat/Animation",
			"firstStep/Variant_Combat/Gameplay",
			"firstStep/Variant_Combat/Interfaces",
			"firstStep/Variant_Combat/UI",
			"firstStep/Variant_SideScrolling",
			"firstStep/Variant_SideScrolling/AI",
			"firstStep/Variant_SideScrolling/Gameplay",
			"firstStep/Variant_SideScrolling/Interfaces",
			"firstStep/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
