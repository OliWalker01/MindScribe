// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <iostream>
#include "string.h"
#include <algorithm>
#include <stdlib.h>
#include <__msvc_chrono.hpp>
#include <random>
#include "Snap_It.generated.h"

using namespace std;

UCLASS()
class MINDSCRIBE_API ASnap_It : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASnap_It();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString snap_Cards[17];
	FString cards_shuffled[17];

	void ShuffleCards(FString arr[], int n);

	UPROPERTY(BlueprintReadWrite, Category = Games)
		FString Picked_Card;

	UFUNCTION(BlueprintCallable, Category = Games)
		FString NextCard();

	UPROPERTY(BlueprintReadWrite, Category = Games)
		int CardNumber;

	UPROPERTY(BlueprintReadWrite, Category = Games)
		bool AllCardsUsed;

	UFUNCTION(BlueprintImplementableEvent, Category = Games)
		void PlaySnapItGame();

	UFUNCTION(BlueprintCallable, Category  = Games)
		void ReshuffleCards();
};
