// Copyright Epic Games, Inc. All Rights Reserved.

#include "DragonDungeonGameMode.h"
#include "DragonDungeonCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADragonDungeonGameMode::ADragonDungeonGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
