// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "string"
#include "AI_Opponent.generated.h"

using namespace std;

UCLASS()
class MINDSCRIBE_API AAI_Opponent : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAI_Opponent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	float reactionTimeMin, reactionTimeMax;

	UPROPERTY(BlueprintReadWrite, Category = AI)
		float reactionTime;
	UPROPERTY(BlueprintReadWrite, Category = AI)
		bool aiAnswered;
	UPROPERTY(BlueprintReadWrite, Category = AI)
		int aiScore;

	UFUNCTION(BlueprintCallable, Category = AI)
		void SnapItAIStats(FString Difficulty);

	UFUNCTION(BlueprintCallable, Category = AI)
		void SnapItAIPlay();
};
