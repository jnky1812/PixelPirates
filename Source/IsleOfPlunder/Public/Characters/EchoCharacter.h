// Copyright of Pixel Piratez

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "EchoCharacter.generated.h"

UCLASS()
class ISLEOFPLUNDER_API AEchoCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEchoCharacter();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void MoveForward(float Value);
	
};
