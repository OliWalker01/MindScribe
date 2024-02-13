#include "Snap_It.h"

using namespace std;

// Sets default values
ASnap_It::ASnap_It()
{
    // Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
    PrimaryActorTick.bCanEverTick = true;

    snap_Cards[0] = "Dog";
    snap_Cards[1] = "Dog";
    snap_Cards[2] = "Cat";
    snap_Cards[3] = "Cat";
    snap_Cards[4] = "Bird";
    snap_Cards[5] = "Bird";
    snap_Cards[6] = "Fish";
    snap_Cards[7] = "Fish";
    snap_Cards[8] = "Horse";
    snap_Cards[9] = "Horse";
    snap_Cards[10] = "Cow";
    snap_Cards[11] = "Cow";
    snap_Cards[12] = "Pig";
    snap_Cards[13] = "Pig";
    snap_Cards[14] = "Sheep";
    snap_Cards[15] = "Sheep";
    snap_Cards[16] = "Chicken";
    snap_Cards[17] = "Chicken";

    CardNumber = 0;
}

// Called when the game starts or when spawned
void ASnap_It::BeginPlay()
{
    Super::BeginPlay();

    CardNumber = 0;

    int n = sizeof(snap_Cards) / sizeof(snap_Cards[0]);

    ShuffleCards();
}

// Called every frame
void ASnap_It::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ASnap_It::ShuffleCards()
{
    AllCardsUsed = false;

    const int ARRAY_SIZE = 18;
    srand(static_cast<unsigned int>(time(0)));

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        int index = rand() % ARRAY_SIZE;

        FString temp = snap_Cards[i];
        snap_Cards[i] = snap_Cards[index];
        snap_Cards[index] = temp;
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cards_shuffled[i] = snap_Cards[i];
    }
}

FString ASnap_It::NextCard()
{
    Picked_Card = cards_shuffled[CardNumber];

    CardNumber++;

    return Picked_Card;
}

void ASnap_It::ReshuffleCards()
{
    CardNumber = 0;

    ShuffleCards();
}