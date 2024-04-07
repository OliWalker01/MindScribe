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
	numberOfLives = 5;

	srand(static_cast<unsigned int>(time(0)));
	int questionNumber = rand() & 3;

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
	}

	//SudokuEasyQuestionOne();
}

void ASudoku::PickSudokuMediumQuestion()
{
	numberOfLives = 3;

	srand(static_cast<unsigned int>(time(0)));
	int questionNumber = rand() & 3;

	switch (questionNumber)
	{
	case 0:
		SudokuMediumQuestionOne();
		break;
	case 1:
		SudokuMediumQuestionTwo();
		break;
	case 2:
		SudokuMediumQuestionThree();
		break;
	case 3:
		SudokuMediumQuestionFour();
		break;
	}

	//SudokuMediumQuestionOne();
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

	correctAnswers = 4;
}

void ASudoku::SudokuEasyQuestionTwo()
{
	A1 = 3;
	A2 = 4;
	A3 = 2;
	A4 = 1;
	B1 = 1;
	B2 = 2;
	B3 = 3;
	B4 = 4;
	C1 = 2;
	C2 = 1;
	C3 = 4;
	C4 = 3;
	D1 = 4;
	D2 = 3;
	D3 = 1;
	D4 = 2;

	A1Active = true;
	A2Active = false;
	A3Active = true;
	A4Active = true;
	B1Active = true;
	B2Active = true;
	B3Active = false;
	B4Active = true;
	C1Active = false;
	C2Active = true;
	C3Active = true;
	C4Active = true;
	D1Active = true;
	D2Active = true;
	D3Active = true;
	D4Active = false;

	correctAnswers = 4;
}

void ASudoku::SudokuEasyQuestionThree()
{
	A1 = 3;
	A2 = 2;
	A3 = 4;
	A4 = 1;
	B1 = 1;
	B2 = 4;
	B3 = 3;
	B4 = 2;
	C1 = 2;
	C2 = 3;
	C3 = 1;
	C4 = 4;
	D1 = 4;
	D2 = 1;
	D3 = 2;
	D4 = 3;

	A1Active = false;
	A2Active = true;
	A3Active = false;
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
	D2Active = false;
	D3Active = true;
	D4Active = false;

	correctAnswers = 4;
}

void ASudoku::SudokuEasyQuestionFour()
{
	A1 = 4;
	A2 = 1;
	A3 = 2;
	A4 = 3;
	B1 = 3;
	B2 = 2;
	B3 = 1;
	B4 = 4;
	C1 = 1;
	C2 = 4;
	C3 = 3;
	C4 = 2;
	D1 = 2;
	D2 = 3;
	D3 = 4;
	D4 = 1;

	A1Active = false;
	A2Active = true;
	A3Active = true;
	A4Active = true;
	B1Active = true;
	B2Active = true;
	B3Active = false;
	B4Active = true;
	C1Active = true;
	C2Active = true;
	C3Active = false;
	C4Active = true;
	D1Active = false;
	D2Active = true;
	D3Active = true;
	D4Active = false;;

	correctAnswers = 5;
}

void ASudoku::QuitGame()
{
	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();

	if (PlayerController != nullptr)
	{
		PlayerController->ConsoleCommand("quit");
	}
}

void ASudoku::AddToNotedNumbers(FString ActiveCard)
{

}

void ASudoku::SudokuMediumQuestionOne()
{
	A1 = 5;
	A2 = 2;
	A3 = 1;
	A4 = 4;
	A5 = 3;
	A6 = 6;
	B1 = 6;
	B2 = 4;
	B3 = 2;
	B4 = 3;
	B5 = 1;
	B6 = 5;
	C1 = 1;
	C2 = 3;
	C3 = 5;
	C4 = 6;
	C5 = 4;
	C6 = 2;
	D1 = 2;
	D2 = 5;
	D3 = 3;
	D4 = 1;
	D5 = 6;
	D6 = 4;
	E1 = 4;
	E2 = 1;
	E3 = 6;
	E4 = 5;
	E5 = 2;
	E6 = 3;
	F1 = 3;
	F2 = 6;
	F3 = 4;
	F4 = 2;
	F5 = 5;
	F6 = 1;

	A1Active = true;
	A2Active = true;
	A3Active = false;
	A4Active = false;
	A5Active = true;
	A6Active = true;
	B1Active = false;
	B2Active = false;
	B3Active = true;
	B4Active = true;
	B5Active = true;
	B6Active = false;
	C1Active = true;
	C2Active = false;
	C3Active = true;
	C4Active = true;
	C5Active = false;
	C6Active = true;
	D1Active = false;
	D2Active = true;
	D3Active = true;
	D4Active = true;
	D5Active = false;
	D6Active = true;
	E1Active = false;
	E2Active = true;
	E3Active = true;
	E4Active = false;
	E5Active = true;
	E6Active = true;
	F1Active = true;
	F2Active = true;
	F3Active = false;
	F4Active = true;
	F5Active = true;
	F6Active = false;

	correctAnswers = 13;
}

void ASudoku::SudokuMediumQuestionTwo()
{
	A1 = 4;
	A2 = 2;
	A3 = 3;
	A4 = 1;
	A5 = 6;
	A6 = 5;
	B1 = 5;
	B2 = 6;
	B3 = 4;
	B4 = 2;
	B5 = 1;
	B6 = 3;
	C1 = 3;
	C2 = 1;
	C3 = 5;
	C4 = 6;
	C5 = 2;
	C6 = 4;
	D1 = 1;
	D2 = 5;
	D3 = 6;
	D4 = 3;
	D5 = 4;
	D6 = 2;
	E1 = 6;
	E2 = 4;
	E3 = 2;
	E4 = 5;
	E5 = 3;
	E6 = 1;
	F1 = 2;
	F2 = 3;
	F3 = 1;
	F4 = 4;
	F5 = 5;
	F6 = 6;

	A1Active = false;
	A2Active = true;
	A3Active = true;
	A4Active = false;
	A5Active = false;
	A6Active = false;
	B1Active = true;
	B2Active = true;
	B3Active = true;
	B4Active = false;
	B5Active = true;
	B6Active = true;
	C1Active = false;
	C2Active = false;
	C3Active = true;
	C4Active = true;
	C5Active = true;
	C6Active = false;
	D1Active = true;
	D2Active = true;
	D3Active = false;
	D4Active = true;
	D5Active = true;
	D6Active = true;
	E1Active = false;
	E2Active = true;
	E3Active = true;
	E4Active = true;
	E5Active = false;
	E6Active = true;
	F1Active = false;
	F2Active = false;
	F3Active = true;
	F4Active = true;
	F5Active = false;
	F6Active = true;

	correctAnswers = 14;
}

void ASudoku::SudokuMediumQuestionThree()
{
	A1 = 3;
	A2 = 6;
	A3 = 4;
	A4 = 1;
	A5 = 5;
	A6 = 2;
	B1 = 2;
	B2 = 4;
	B3 = 6;
	B4 = 5;
	B5 = 1;
	B6 = 3;
	C1 = 5;
	C2 = 1;
	C3 = 2;
	C4 = 3;
	C5 = 6;
	C6 = 4;
	D1 = 6;
	D2 = 2;
	D3 = 1;
	D4 = 4;
	D5 = 3;
	D6 = 5;
	E1 = 4;
	E2 = 5;
	E3 = 3;
	E4 = 6;
	E5 = 2;
	E6 = 1;
	F1 = 1;
	F2 = 3;
	F3 = 5;
	F4 = 2;
	F5 = 4;
	F6 = 6;

	A1Active = true;
	A2Active = false;
	A3Active = false;
	A4Active = true;
	A5Active = true;
	A6Active = true;
	B1Active = true;
	B2Active = true;
	B3Active = true;
	B4Active = false;
	B5Active = true;
	B6Active = false;
	C1Active = true;
	C2Active = false;
	C3Active = true;
	C4Active = false;
	C5Active = true;
	C6Active = false;
	D1Active = true;
	D2Active = false;
	D3Active = false;
	D4Active = true;
	D5Active = true;
	D6Active = true;
	E1Active = false;
	E2Active = true;
	E3Active = true;
	E4Active = true;
	E5Active = false;
	E6Active = true;
	F1Active = false;
	F2Active = true;
	F3Active = false;
	F4Active = true;
	F5Active = false;
	F6Active = true;

	correctAnswers = 14;
}

void ASudoku::SudokuMediumQuestionFour()
{
	A1 = 4;
	A2 = 2;
	A3 = 6;
	A4 = 5;
	A5 = 1;
	A6 = 3;
	B1 = 5;
	B2 = 1;
	B3 = 4;
	B4 = 3;
	B5 = 6;
	B6 = 2;
	C1 = 6;
	C2 = 3;
	C3 = 1;
	C4 = 2;
	C5 = 5;
	C6 = 4;
	D1 = 3;
	D2 = 4;
	D3 = 5;
	D4 = 6;
	D5 = 2;
	D6 = 1;
	E1 = 1;
	E2 = 6;
	E3 = 2;
	E4 = 4;
	E5 = 3;
	E6 = 5;
	F1 = 2;
	F2 = 5;
	F3 = 3;
	F4 = 1;
	F5 = 4;
	F6 = 6;

	A1Active = true;
	A2Active = false;
	A3Active = false;
	A4Active = false;
	A5Active = true;
	A6Active = true;
	B1Active = true;
	B2Active = true;
	B3Active = true;
	B4Active = true;
	B5Active = false;
	B6Active = false;
	C1Active = true;
	C2Active = false;
	C3Active = false;
	C4Active = true;
	C5Active = true;
	C6Active = false;
	D1Active = true;
	D2Active = true;
	D3Active = false;
	D4Active = false;
	D5Active = true;
	D6Active = true;
	E1Active = false;
	E2Active = true;
	E3Active = true;
	E4Active = true;
	E5Active = false;
	E6Active = true;
	F1Active = true;
	F2Active = true;
	F3Active = false;
	F4Active = true;
	F5Active = false;
	F6Active = false;

	correctAnswers = 15;
}