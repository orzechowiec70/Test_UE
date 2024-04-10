// Fill out your copyright notice in the Description page of Project Settings.


#include "Test/Public/Core/TestPlayerController.h"
#include "InputMappingContext.h"
#include "Test/Public/Core/TestCharacter.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

void ATestPlayerController::BindInput(UEnhancedInputComponent* InputComp, ATestCharacter* TestCharacter)
{
	InputComp->BindAction(MoveAction, ETriggerEvent::Triggered, TestCharacter, &ATestCharacter::MoveCharacterWithInput);
	InputComp->BindAction(LookAction, ETriggerEvent::Triggered, TestCharacter, &ATestCharacter::LookInput);
	InputComp->BindAction(JumpAction, ETriggerEvent::Triggered, TestCharacter, &ATestCharacter::JumpInput);

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(InputMappingContext, 0);
	}
}
