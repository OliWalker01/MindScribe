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
		bool A1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool A4Active;

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
		bool B1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool B4Active;

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
		bool C1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool C4Active;

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
		bool D1Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D2Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D3Active;
	UPROPERTY(BlueprintReadWrite, Category = "Sudoku")
		bool D4Active;

	UFUNCTION(BlueprintCallable, Category = "Sudoku")
		void PickSudokuEasyQuestion();

	void SudokuEasyQuestionOne();
	void SudokuEasyQuestionTwo();
	void SudokuEasyQuestionThree();
	void SudokuEasyQuestionFour();

	void QuitGame();
};
