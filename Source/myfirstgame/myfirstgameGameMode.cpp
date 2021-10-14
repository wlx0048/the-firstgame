// Copyright Epic Games, Inc. All Rights Reserved.

#include "myfirstgameGameMode.h"
#include "myfirstgameCharacter.h"
#include "UObject/ConstructorHelpers.h"

AmyfirstgameGameMode::AmyfirstgameGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
