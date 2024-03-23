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
		//02SudokuMediumQuestionTwo();
		break;
	case 2:
		//SudokuMediumQuestionThree();
		break;
	case 3:
		//SudokuMediumQuestionFour();
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
	D1Active = true;
	D2Active = false;
	D3Active = false;
	D4Active = true;

	correctAnswers = 4;
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
	A1 =
	A2 = 
	A3 = 
	A4 = 
	A5 = 
	A6 =
	B1 = 
	B2 = 
	B3 = 
	B4 = 
	B5 = 
	B6 = 
	C1 = 
	C2 = 
	C3 = 
	C4 = 
	C5 = 
	C6 = 
	D1 = 
	D2 = 
	D3 = 
	D4 = 
	D5 = 
	D6 = 
	E1 = 
	E2 = 
	E3 = 
	E4 = 
	E5 = 
	E6 = 
	F1 = 
	F2 = 
	F3 = 
	F4 = 
	F5 = 
	F6 = 

	A1Active =
	A2Active =
	A3Active =
	A4Active =
	A5Active =
	A6Active =
	B1Active =
	B2Active =
	B3Active =
	B4Active =
	B5Active =
	B6Active =
	C1Active =
	C2Active =
	C3Active =
	C4Active =
	C5Active =
	C6Active =
	D1Active =
	D2Active =
	D3Active =
	D4Active =
	D5Active =
	D6Active =
	E1Active =
	E2Active =
	E3Active =
	E4Active =
	E5Active =
	E6Active =
	F1Active =
	F2Active =
	F3Active =
	F4Active =
	F5Active =
	F6Active =

	correctAnswers = 
}