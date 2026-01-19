#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

void generateTwoRandomNums(int *rand1, int *rand2)
{
  srand(time(NULL));
  *rand1 = rand() % 50 + 1;
  *rand2 = rand() % 50 + 1;
  printf("New rand1 in function %d\n", *rand1);
  printf("New rand2 in function %d\n", *rand2);
}

int main()
{
  int a = 1;
  int b = 2;
  int c = 3;
  int *p_a = &a;
  printf("%p\n", &a);
  printf("%p\n", p_a);
  printf("%lu\n", (uintptr_t)p_a);
  printf("%lu\n", (uintptr_t)&b);
  printf("%lu\n", (uintptr_t)&c);
  printf("%d\n", *p_a);
  *p_a = 100;
  printf("%d\n", a);

  int primeNumbers[] = {2, 3, 5, 7};
  printf("First index: %p\n", primeNumbers);
  printf("First index: %d\n", primeNumbers[0]);
  printf("First index: %p\n", primeNumbers + 1);
  printf("First index: %d\n", *(primeNumbers + 1));
  printf("First index: %p\n", primeNumbers + 2);
  printf("First index: %d\n", *(primeNumbers + 2));
  printf("First index: %p\n", primeNumbers + 3);
  printf("First index: %d\n", *(primeNumbers + 3));

  char *students[4] = {"Sally", "Mark", "Paul", "Sue"};
  for (int i = 0; i < 4; i++)
  {
    printf("%s : %lu\n", students[i], (uintptr_t)&students[i]);
  }

  printf("Main before function call");
  int rand1 = 0, rand2 = 0;
  generateTwoRandomNums(&rand1, &rand2);
  printf("rand1 = %d\n", rand1);
  printf("rand2 = %d\n", rand2);
  printf("Main after function call");
}
