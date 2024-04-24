// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TestAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"

void UTestAnimInstance::NativeBeginPlay()
{
	Pawn = TryGetPawnOwner();
	Forward = Pawn->GetActorForwardVector();
}

void UTestAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	
	if (IsValid(Pawn))
	{
		Velocity = Pawn->GetVelocity();
		Speed = Velocity.Length();

		bIsMoving = Speed > SMALL_NUMBER;

		const float Dot = Velocity.GetSafeNormal().Dot(Forward);
		bIsMovingForward = Dot > SMALL_NUMBER;
		bIsJumping = Pawn->GetVelocity().Z > 0;


		Rotation = Pawn->GetActorRotation();
		Orientation = CalculateDirection(Velocity, Rotation);

	}
	else
	{
		Pawn = TryGetPawnOwner();
	}
}
