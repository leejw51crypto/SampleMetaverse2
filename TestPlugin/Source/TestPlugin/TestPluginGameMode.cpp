// Copyright Epic Games, Inc. All Rights Reserved.

#include "TestPluginGameMode.h"
#include "TestPluginCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestPluginGameMode::ATestPluginGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
