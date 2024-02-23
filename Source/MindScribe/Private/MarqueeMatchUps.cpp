// Fill out your copyright notice in the Description page of Project Settings.


#include "MarqueeMatchUps.h"

// Sets default values
AMarqueeMatchUps::AMarqueeMatchUps()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMarqueeMatchUps::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMarqueeMatchUps::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

// Picks a Shape to Add to Pattern
FString AMarqueeMatchUps::PickShape()
{
	srand(static_cast<unsigned int>(time(0)));
	int random = rand() % 4;

	switch (random)
	{
	case(0):
		Shape = "Circle";
		break;
	case(1):
		Shape = "Heart";
		break;
	case(2):
		Shape = "Square";
		break;
	case(3):
		Shape = "Star";
		break;
	case(4):
		Shape = "Triangle";
		break;
	default:
		Shape = NULL;
		break;
	}

	return Shape;
}