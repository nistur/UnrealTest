// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "UnrealTestGameMode.h"
#include "UnrealTestPlayerController.h"
#include "UnrealTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUnrealTestGameMode::AUnrealTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = AUnrealTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}