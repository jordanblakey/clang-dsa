#include <stdio.h>
#include <stdlib.h>

int main()
{
  int whatToDo = 0;

  do
  {
    printf("\n");
    printf("1. What time is it?\n");
    printf("2. What is today's date?\n");
    printf("3. What day is it?\n");
    printf("4. Quit\n");
    scanf(" %d", &whatToDo);
  } while (whatToDo < 1 || whatToDo > 4);

  // if (whatToDo == 1)
  // {
  //   printf("print the time\n");
  // }
  // else if (whatToDo == 2)
  // {
  //   printf("print the date\n");
  // }
  // else if (whatToDo == 3)
  // {
  //   printf("print the day\n");
  // }
  // else
  // {
  //   printf("Bye bye\n");
  //   exit(0);
  // }

  switch (whatToDo)
  {
  case (1):
    printf("Print the time");
    break;
  case (2):
    printf("Print the date");
    break;
  case (3):
    printf("Print the day");
    break;
  default:
    printf("Bye Buy");
    exit(0);
    break;
  }
}