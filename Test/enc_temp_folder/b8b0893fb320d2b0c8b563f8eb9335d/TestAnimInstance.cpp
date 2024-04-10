// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TestAnimInstance.h"

void UTestAnimInstance::NativeBeginPlay()
{
	Pawn = TryGetPawnOwner();
}

void UTestAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	if (IsValid(Pawn))
	{
		Velocity = Pawn->GetVelocity();
		Speed = Velocity.Length();
	}
}
