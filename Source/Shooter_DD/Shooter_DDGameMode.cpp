// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

#include "Shooter_DD.h"
#include "Shooter_DDGameMode.h"
#include "Shooter_DDHUD.h"
#include "Shooter_DDCharacter.h"

AShooter_DDGameMode::AShooter_DDGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooter_DDHUD::StaticClass();
}
