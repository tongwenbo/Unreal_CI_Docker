// Copyright Epic Games, Inc. All Rights Reserved.

#include "VsGameMode.h"
#include "VsHUD.h"
#include "VsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AVsGameMode::AVsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AVsHUD::StaticClass();
}
