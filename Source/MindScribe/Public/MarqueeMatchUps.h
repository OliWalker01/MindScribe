// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MarqueeMatchUps.generated.h"

using namespace std;

UCLASS()
class MINDSCRIBE_API AMarqueeMatchUps : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMarqueeMatchUps();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(BlueprintReadWrite, Category = Game)
		FString Shape;

	UFUNCTION(BlueprintCallable, Category = Game)
		FString PickShape();
};
