// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GameJamJulyGameMode.h"
#include "GameJamJulyPawn.h"

AGameJamJulyGameMode::AGameJamJulyGameMode()
{
	// set default pawn class to our flying pawn
	DefaultPawnClass = AGameJamJulyPawn::StaticClass();
}
