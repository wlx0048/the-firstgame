// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class myfirstgame : ModuleRules
{
	public myfirstgame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
