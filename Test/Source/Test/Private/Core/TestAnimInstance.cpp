// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TestAnimInstance.h"
#include "Kismet/KismetMathLibrary.h"

void UTestAnimInstance::NativeBeginPlay()
{
	Pawn = TryGetPawnOwner();
	Rotation = Pawn->GetActorRotation();
	Forward = Pawn->GetActorForwardVector();
	Right = Pawn->GetActorRightVector();
}

void UTestAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	
	if (IsValid(Pawn))
	{
		Velocity = Pawn->GetVelocity();
		Speed = Velocity.Length();

		bIsMoving = Speed > SMALL_NUMBER;

		const float Dot = Velocity.GetSafeNormal().Dot(Forward);
		//const float Dotv2 = Right.GetSafeNormal().Dot(Forward);
		bIsMovingForward = Dot > SMALL_NUMBER;

		Orientation = CalculateDirection(Velocity, Rotation);

		//Orientation = ((acos(Dotv2 / (Forward.Length() * Rotation.Length())))*180)/mathPi;

	}
	else
	{
		Pawn = TryGetPawnOwner();
	}
}
