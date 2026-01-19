#include <stdio.h>

struct dogsFavs
{
  char *food;
  char *friend;
};

typedef struct dog
{
  const char *name;
  const char *breed;
  int avgHeightCm;
  int avgWeightLbs;
  struct dogsFavs favoriteThings;
} dog;

void getDogInfo(struct dog theDog)
{
  printf("\n");
  printf("name: %s\n", theDog.name);
  printf("breed: %s\n", theDog.breed);
  printf("avgHeightCm: %d\n", theDog.avgHeightCm);
  printf("avgWeightLbs: %d\n", theDog.avgWeightLbs);
}

void getMemoryLocations(struct dog theDog)
{
  printf("Name Location: %p\n", &theDog.name);
  printf("Breed Location: %p\n", &theDog.breed);
  printf("avgHeightCm Location: %p\n", &theDog.avgHeightCm);
  printf("avgWeightLbs Location: %p\n", &theDog.avgWeightLbs);
}

void getDogsFavs(dog theDog)
{

  printf("\n");
  printf("%s loves %s and his friend is %s\n\n", theDog.name, theDog.favoriteThings.food, theDog.favoriteThings.friend);
}

void setDogWeightPtr(dog *theDog, int newWeight)
{
  (*theDog).avgWeightLbs = newWeight;
  theDog->avgWeightLbs = newWeight;
  printf("The weight was changed to %d\n\n", theDog->avgWeightLbs);
}

int main()
{
  struct dog cujo = {
      "Cujo",
      "Saint Bernard",
      90,
      264};

  getDogInfo(cujo);
  struct dog cujo2 = cujo;

  getMemoryLocations(cujo);
  getMemoryLocations(cujo2); // same memory locations for all property values when the struct is copied

  dog benji = {"Benji", "Silky Terrier", 25, 9, {"Meat", "Joe Camp"}};
  getDogsFavs(benji);

  setDogWeightPtr(&benji, 11);

  printf("The Weight in Main() %d\n\n", benji.avgWeightLbs);

  return 0;
}