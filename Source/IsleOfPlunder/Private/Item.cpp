// Copyright of Pixel Piratez


#include "IsleOfPlunder/Public/Item.h"
#include "DrawDebugHelpers.h"
#include "IsleOfPlunder/IsleOfPlunder.h"

#define THIRTY 30


// Sets default values
AItem::AItem()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AItem::BeginPlay()
{
	Super::BeginPlay();
	//Check Begin play is firing
	UE_LOG(LogTemp, Warning, TEXT("Begin Play Called!"));

	if(GEngine)
	{
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, FString("Item OnScreen Message!"));
	}

	UWorld* World = GetWorld();
	
	FVector Location = GetActorLocation();
	DRAW_SPHERE(Location);
	
}

// Called every frame
void AItem::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	UE_LOG(LogTemp, Warning, TEXT("DeltaTime: %f"), DeltaTime)

	if(GEngine)
	{
		FString Name = GetName();
		FString Message = FString::Printf(TEXT("Item Name: %s"), *Name);
		GEngine->AddOnScreenDebugMessage(1, 60.f, FColor::Cyan, Message);

		UE_LOG(LogTemp, Warning, TEXT("Item Name: %s"), *Name)
	}

}

