// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/HUD.h"
#include "eternal_chaseHud.generated.h"


UCLASS(config = Game)
class Aeternal_chaseHud : public AHUD
{
	GENERATED_BODY()

public:
	Aeternal_chaseHud();

	/** Font used to render the vehicle info */
	UPROPERTY()
	UFont* HUDFont;

	// Begin AHUD interface
	virtual void DrawHUD() override;
	// End AHUD interface
};
