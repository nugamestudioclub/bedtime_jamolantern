// Copyright Epic Games, Inc. All Rights Reserved.

#include "BedtimeGameMode.h"
#include "BedtimeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABedtimeGameMode::ABedtimeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
