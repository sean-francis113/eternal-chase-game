// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "eternal_chaseGameMode.h"
#include "eternal_chasePawn.h"
#include "eternal_chaseHud.h"

Aeternal_chaseGameMode::Aeternal_chaseGameMode()
{
	DefaultPawnClass = Aeternal_chasePawn::StaticClass();
	HUDClass = Aeternal_chaseHud::StaticClass();
}
