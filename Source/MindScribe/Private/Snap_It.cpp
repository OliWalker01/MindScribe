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

    ShuffleCards(snap_Cards, n);
}

// Called every frame
void ASnap_It::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

void ASnap_It::ShuffleCards(FString arr[], int n)
{
    AllCardsUsed = false;

    unsigned seed = 0;

    shuffle(arr, arr + n, default_random_engine(seed));

    for (int i = 0; i < n; ++i) { cards_shuffled[i] = arr[i]; }
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

    int n = sizeof(cards_shuffled) / sizeof(cards_shuffled[0]);

    ShuffleCards(cards_shuffled, n);
}