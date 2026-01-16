// Single line comments
/*
  Multi line comments
*/

// constants
#define DAYS_IN_YEAR 365

enum days
{
  SUN,
  MON,
  TUE,
  WED,
  THU,
  FRI,
  SAT
};
enum days2
{
  SUN2 = 1,
  MON2,
  TUE2,
  WED2 = 99,
  THU2,
  FRI2,
  SAT2
};

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "./my_header.h"
#include "../my_lib/my_lib_header.h"

// declare function signatures in advance in a .h, or at the top of your c file.
void function_1();
int function_2(void);

int add(int a, int b)
{
  return a + b;
};

int main(void)
{
  printf("Hello, World!\n");
  int n = add(2, 3);
  printf("%d\n", n);
  int input;
  printf("Please enter a number: ");
  scanf("%d", &input);
  printf("\n%d", input);
}