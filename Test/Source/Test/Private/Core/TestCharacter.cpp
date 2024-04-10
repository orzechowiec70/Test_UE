// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/TestCharacter.h"
#include "GameFramework/SpringArmComponent.h" //nie zapominaj
#include "Camera/CameraComponent.h"
#include "Core/TestPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "EnhancedInputComponent.h"

// Sets default values
ATestCharacter::ATestCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Camera = CreateDefaultSubobject<USpringArmComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
	Camera->TargetArmLength = 400.f; //jak daleko kamera
	Camera->bUsePawnControlRotation = true; //follows rotation of the parent

	FollowCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FollowCamera"));
	FollowCamera->SetupAttachment(Camera, USpringArmComponent::SocketName);
	FollowCamera->bUsePawnControlRotation = false;
}

// Called when the game starts or when spawned
void ATestCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ATestCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ATestCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	
	ATestPlayerController* TestPlayerController = Cast<ATestPlayerController>(Controller);

	UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent);
	check(TestPlayerController && EnhancedInput)
		TestPlayerController->BindInput(EnhancedInput, this);
}



void ATestCharacter::MoveCharacterWithInput(const FInputActionValue& InputValue)
{
	FVector2D InputVector = InputValue.Get<FVector2D>();
	if (IsValid(Controller)) {
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);
		
		const FRotationMatrix DirectionMatrix = FRotationMatrix(YawRotation);
		const FVector ForwardDirection = DirectionMatrix.GetUnitAxis(EAxis::X);
		const FVector RightDirection = DirectionMatrix.GetUnitAxis(EAxis::Y);

		AddMovementInput(ForwardDirection, InputVector.Y);
		AddMovementInput(RightDirection, InputVector.X);
	}
}

void ATestCharacter::LookInput(const FInputActionValue& InputValue)
{
	FVector2D InputVector = InputValue.Get<FVector2D>();
	if (IsValid(Controller)) {
		AddControllerYawInput(InputVector.X);
		AddControllerPitchInput(InputVector.Y);
	}
}

void ATestCharacter::JumpInput()
{
	ACharacter::Jump();
}


