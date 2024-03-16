// Fill out your copyright notice in the Description page of Project Settings.


#include "Sudoku.h"

// Sets default values
ASudoku::ASudoku()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASudoku::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASudoku::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASudoku::PickSudokuEasyQuestion()
{
	/*srand(static_cast<unsigned int>(time(0)));
	int questionNumber = rand() & 3;

	questionNumber = 0;

	switch (questionNumber)
	{
	case 0:
		SudokuEasyQuestionOne();
		break;
	case 1:
		SudokuEasyQuestionTwo();
		break;
	case 2:
		SudokuEasyQuestionThree();
		break;
	case 3:
		SudokuEasyQuestionFour();
		break;
	}*/

	SudokuEasyQuestionOne();
}

void ASudoku::SudokuEasyQuestionOne()
{
	A1 = 4;
	A2 = 3;
	A3 = 1;
	A4 = 2;
	B1 = 2;
	B2 = 1;
	B3 = 3;
	B4 = 4;
	C1 = 3;
	C2 = 2;
	C3 = 4;
	C4 = 1;
	D1 = 1;
	D2 = 4;
	D3 = 2;
	D4 = 3;

	A1Active = false;
	A2Active = false;
	A3Active = true;
	A4Active = true;
	B1Active = true;
	B2Active = true;
	B3Active = true;
	B4Active = true;
	C1Active = true;
	C2Active = true;
	C3Active = true;
	C4Active = true;
	D1Active = true;
	D2Active = true;
	D3Active = false;
	D4Active = false;
}

void ASudoku::QuitGame()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	if (PlayerController != nullptr)
	{
		PlayerController->ConsoleCommand("quit");
	}
}
