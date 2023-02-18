// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProtoGlod_PlayGameMode.h"
#include "ProtoGlod_PlayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProtoGlod_PlayGameMode::AProtoGlod_PlayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Bot_3rdPersonTest/Blueprint/BP_StackBot"));
	
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
