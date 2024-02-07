// Fill out your copyright notice in the Description page of Project Settings.


#include "MathsQuestions.h"
using namespace TextKeyUtil;

using namespace std;

// Sets default values
AMathsQuestions::AMathsQuestions()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	numberOne = 0;
	numberTwo = 0;
	targetNumber = 0;
	mathSymbol = "+";
}

// Called when the game starts or when spawned
void AMathsQuestions::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMathsQuestions::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMathsQuestions::GenerateMathQuestion(const FString& Difficulty)
{
	if (Difficulty == "Easy")
	{
		EasyQuestion();
	}
	else if (Difficulty == "Medium")
	{
		MediumQuestion();
	}
	else if (Difficulty == "Hard")
	{
		HardQuestion();
	}
}

void AMathsQuestions::EasyQuestion()
{
	mathSymbol = "+";

	// Gets Random Values
	srand(static_cast<unsigned int>(time(0)));
	numberOne = rand() % 25;

	srand(static_cast<unsigned int>(time(0)));
	numberTwo = rand() % 10;

	// Adds the Numbers Together to Get Target Number
	targetNumber = numberOne + numberTwo;
}

void AMathsQuestions::MediumQuestion()
{
	srand(static_cast<unsigned int>(time(0)));
	int randomChance = rand() & 1;

	switch (randomChance)
	{
		case(0):
			MediumAddQuestion();
			break;
		case(1):
			MediumSubtractQuestion();
			break;
	}
}

void AMathsQuestions::HardQuestion()
{

}

void AMathsQuestions::MediumAddQuestion()
{
	mathSymbol = "+";

	srand(static_cast<unsigned int>(time(0)));
	numberOne = rand() % 25;

	srand(static_cast<unsigned int>(time(0)));
	numberTwo = rand() & 10;

	targetNumber = numberOne + numberTwo;
}

void AMathsQuestions::MediumSubtractQuestion()
{
	mathSymbol = "-";

	srand(static_cast<unsigned int>(time(0)));
	numberOne = rand() % 25;

	if (numberOne <= 10)
	{
		srand(static_cast<unsigned int>(time(0)));
		numberTwo = rand() % numberOne;
	}
	else
	{
		srand(static_cast<unsigned int>(time(0)));
		numberTwo = rand() % 10;
	}

	targetNumber = numberOne - numberTwo;
}