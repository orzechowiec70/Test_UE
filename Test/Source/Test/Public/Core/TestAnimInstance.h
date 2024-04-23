// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "Math/UnrealMathUtility.h"
#include "TestAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class TEST_API UTestAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector Velocity;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FRotator Rotation;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector Right;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	FVector Forward;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Speed = 0.0f;
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsMoving = false;
	
	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<const APawn> Pawn;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	bool bIsMovingForward = true;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float mathPi = PI;

	UPROPERTY(BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	float Orientation = 0.0f;

protected:
	virtual void NativeBeginPlay() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

};
