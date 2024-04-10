// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h" //bo dziedziczy potem w kodzie wiêc nie mo¿e forward deklaracj¹
#include "InputActionValue.h"
#include "TestCharacter.generated.h"

class USpringArmComponent;
class UCameraComponent;
class UInputMappingContext;
class UInputAction;

UCLASS()
class TEST_API ATestCharacter : public ACharacter
{
	GENERATED_BODY()
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<USpringArmComponent> Camera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Camera, meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UCameraComponent> FollowCamera;

public:
	// Sets default values for this character's properties
	ATestCharacter();
	void MoveCharacterWithInput(const FInputActionValue& InputValue);
	void LookInput(const FInputActionValue& InputValue); //rename it
	void JumpInput();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override; //ta funkcja istnieje na characterze ale nadajemy jej nowe znaczenie

};
