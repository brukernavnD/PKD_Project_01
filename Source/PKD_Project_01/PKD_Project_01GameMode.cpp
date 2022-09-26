// Copyright Epic Games, Inc. All Rights Reserved.

#include "PKD_Project_01GameMode.h"
#include "PKD_Project_01Character.h"
#include "UObject/ConstructorHelpers.h"

APKD_Project_01GameMode::APKD_Project_01GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
