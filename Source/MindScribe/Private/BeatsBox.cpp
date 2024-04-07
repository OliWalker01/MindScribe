// Fill out your copyright notice in the Description page of Project Settings.


#include "BeatsBox.h"

// Sets default values
ABeatsBox::ABeatsBox()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABeatsBox::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABeatsBox::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

FString ABeatsBox::PickPianoKey()
{
	srand(static_cast<unsigned int>(time(0)));
	randomInt = rand() % 4;

	switch (randomInt)
	{
	case 1:
		pianoKey = "A";
		break;
	case 2:
		pianoKey = "B";
		break;
	case 3:
		pianoKey = "C";
		break;
	case 4:
		pianoKey = "D";
		break;
	}

	return pianoKey;
}

