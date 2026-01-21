#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

// int main()
// {
//   bool isANumber;

//   int number;
//   int sumOfNumbers = 0;
//   printf("Enter a number: ");
//   isANumber = (scanf("%d", &number) == 1); // scanf returns 1 if it get's the value it wants

//   // int number;
//   // printf("Enter a number: ");
//   // int result = scanf("%d", &number);
//   // printf("%d", result);

//   while (isANumber)
//   {
//     sumOfNumbers = sumOfNumbers + number;
//     printf("Enter a number: ");
//     isANumber = (scanf("%d", &number) == 1); // scanf returns 1 if it get's the value it wants
//   }

//   printf("The sum is %d\n\n", sumOfNumbers);

//   char theChar;
//   while ((theChar = getchar()) != '~')
//   {
//     putchar(theChar);
//     // }

//     char name[50];
//     printf("What is your name? ");
//     fgets(name, 50, stdin);
//     fputs("Hi ", stdout);
//     fputs(name, stdout);

//     char *randomString = "Just some random stuff";
//     char *pRandomString = randomString;
//     while (*pRandomString)
//     {
//       putchar(*pRandomString++);
//     }
//     putchar('\n');

//     int i = 0;
//     while (randomString[i] != '\0')
//     {
//       putchar(randomString[i++]);
//     }
//   }

void noMoreNewline(char *theString)
{
  char *isANewLine;
  isANewLine = strrchr(theString, '\n');

  if (isANewLine)
  {
    *isANewLine = '\0';
  }
}

void makeLowercase(char *theString)
{
  int i = 0;
  while (theString[i])
  {
    theString[i] = tolower(theString[i]);
    i++;
  }
};

int main()
{
  char doYouWantToQuit[10];
  printf("Enter quit to quit: ");
  fgets(doYouWantToQuit, 10, stdin);
  noMoreNewline(doYouWantToQuit);
  makeLowercase(doYouWantToQuit);
  printf("%s", doYouWantToQuit);
}