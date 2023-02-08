// Copyright Epic Games, Inc. All Rights Reserved.

#include "ProtoGlod_PlayGameMode.h"
#include "ProtoGlod_PlayCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProtoGlod_PlayGameMode::AProtoGlod_PlayGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
