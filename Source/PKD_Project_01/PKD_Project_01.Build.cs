// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PKD_Project_01 : ModuleRules
{
	public PKD_Project_01(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
