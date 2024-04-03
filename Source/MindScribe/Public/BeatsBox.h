// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BeatsBox.generated.h"

UCLASS()
class MINDSCRIBE_API ABeatsBox : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABeatsBox();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	int randomInt;
	FString pianoKey;

	UFUNCTION(BlueprintCallable, Category = "Beats Box")
		FString PickPianoKey();
};