// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class AudioProgramming_UE4 : ModuleRules
{
	public AudioProgramming_UE4(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
