// Copyright Epic Games, Inc. All Rights Reserved.

#include "AudioProgramming_UE4GameMode.h"
#include "AudioProgramming_UE4Character.h"
#include "UObject/ConstructorHelpers.h"

AAudioProgramming_UE4GameMode::AAudioProgramming_UE4GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
