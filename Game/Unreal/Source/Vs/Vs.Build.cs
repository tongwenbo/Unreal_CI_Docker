// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Vs : ModuleRules
{
	public Vs(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
