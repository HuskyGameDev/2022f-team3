// Copyright Epic Games, Inc. All Rights Reserved.

#include "RaphaelGameMode.h"
#include "RaphaelCharacter.h"

ARaphaelGameMode::ARaphaelGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ARaphaelCharacter::StaticClass();	
}
