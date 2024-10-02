// Copyright Epic Games, Inc. All Rights Reserved.

#include "TeamDGameMode.h"
#include "TeamDCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATeamDGameMode::ATeamDGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
