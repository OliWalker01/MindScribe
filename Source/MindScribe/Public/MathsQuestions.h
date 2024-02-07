// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include <string>
#include <cstdlib>
#include <ctime>
#include "MathsQuestions.generated.h"

using namespace std;

UCLASS()
class MINDSCRIBE_API AMathsQuestions : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMathsQuestions();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category=Math)
		void GenerateMathQuestion(const FString& Difficulty);

	UPROPERTY(BlueprintReadWrite, Category=Math)
		int numberOne;
	UPROPERTY(BlueprintReadWrite, Category = Math)
		int numberTwo;
	UPROPERTY(BlueprintReadWrite, Category = Math)
		int targetNumber;
	UPROPERTY(BlueprintReadWrite, Category = Math)
		FString mathSymbol;

	void EasyQuestion();
	void MediumQuestion();
	void HardQuestion();

	void MediumSubtractQuestion();
	void MediumAddQuestion();
};
