// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/KismetSystemLibrary.h"
#include "GameFramework/Actor.h"
#include "Sudoku.generated.h"

UCLASS()
class MINDSCRIBE_API ASudoku : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASudoku();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Row A
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int A6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> A6NotedNumbers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A6Active;

	// Row B
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int B6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> B6NotedNumbers;


	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B6Active;

	// Row C
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int C6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> C6NotedNumbers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C6Active;

	// Row D
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int D6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> D6NotedNumbers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D6Active;

	// Row E
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int E6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> E6NotedNumbers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool E6Active;

	// Row F
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F1;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F2;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F3;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F4;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F5;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int F6;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F1NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F2NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F3NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F4NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F5NotedNumbers;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		TArray <int> F6NotedNumbers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F4Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F5Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool F6Active;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int correctAnswers;

	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		int numberOfLives;

	UFUNCTION(BlueprintCallable, Category = "Sudoku")
		void PickSudokuEasyQuestion();
	UFUNCTION(BlueprintCallable, Category = "Sudoku")
		void PickSudokuMediumQuestion();

	UFUNCTION(BlueprintCallable, Category = "Sudoku")
		void AddToNotedNumbers(FString ActiveCard);

	void SudokuEasyQuestionOne();
	void SudokuEasyQuestionTwo();
	void SudokuEasyQuestionThree();
	void SudokuEasyQuestionFour();

	void SudokuMediumQuestionOne();
	void SudokuMediumQuestionTwo();
	void SudokuMediumQuestionThree();
	void SudokuMediumQuestionFour();

	void QuitGame();
};
