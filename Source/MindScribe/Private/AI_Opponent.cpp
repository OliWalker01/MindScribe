// Fill out your copyright notice in the Description page of Project Settings.


#include "AI_Opponent.h"

// Sets default values
AAI_Opponent::AAI_Opponent()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI_Opponent::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAI_Opponent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// AI For The Snap-It! Game
void AAI_Opponent::SnapItAIStats(FString Difficulty)
{
	aiScore = 0;

	if (Difficulty == "Easy")
	{
		reactionTimeMin = 2.0f;
		reactionTimeMax = 4.0f;
	}
	else if (Difficulty == "Medium")
	{
		reactionTimeMin = 1.0f;
		reactionTimeMax = 2.0f;
	}
	else if (Difficulty == "Hard")
	{
		reactionTimeMin = 0.5f;
		reactionTimeMax = 1.5f;
	}
}

void AAI_Opponent::SnapItAIPlay()
{
	// Sets the Time the AI Reacts To
	srand(static_cast<float>(time(0)));
	reactionTime = reactionTimeMin + static_cast <float> (rand()) / (static_cast <float> (RAND_MAX / (reactionTimeMax - reactionTimeMin)));
}