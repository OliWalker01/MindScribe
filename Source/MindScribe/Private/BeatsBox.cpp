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

