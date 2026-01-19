#include <stdio.h>
#include <string.h>

int main()
{
  int primeNums[3] = {2, 3, 5};
  // int morePrimes[] = {13, 17, 19};
  for (int i = 0; i < 3; i++)
  {
    printf("%d ", primeNums[i]);
  }

  printf("\n");
  // char wholeName[13] = "Jordan Blakey";
  int primeNumbers[3] = {2, 3, 5};
  // int morePrimes[] = {13, 17, 19, 23}; // don't need size if assigning literal.

  printf("first prime is %d\n\n", primeNumbers[0]);
  // char city[7] = {'C', 'h', 'i', 'c', 'a', 'g', '0'};
  char thirdCity[] = "Paris";
  char yourCity[30];

  printf("What city do you live in? ");
  if (fgets(yourCity, 30, stdin) != NULL)
  {
    yourCity[strcspn(yourCity, "\r\n")] = '\0';
  }
  printf("Hello, %s\n\n", yourCity);

  printf("Is your city Paris? %s\n\n", strcmp(yourCity, thirdCity) == 0 ? "Yes" : "No");
  // char yourState[] = ", Pennsylvania";
  printf("[%s]", yourCity);
  printf("[%s]", thirdCity);

  printf("%ld\n\n", strlen(thirdCity));
  printf("%d", strcmp("test", "test"));
}