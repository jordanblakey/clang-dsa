#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//   int amtOfNumbersToStore;
//   printf("How many numbers do you want to store: ");
//   scanf("%d", &amtOfNumbersToStore);
//   int *pRandomNumbers;
//   pRandomNumbers = malloc(amtOfNumbersToStore * sizeof(int));
//   if (pRandomNumbers != NULL)
//   {
//     int i = 0;
//     printf("Enter a Number or Quit: ");
//     while (i < amtOfNumbersToStore && scanf("%d", &pRandomNumbers[i]) == 1)
//     {
//       printf("Enter a number or Quit: ");
//       i++;
//     };
//     printf("\nYou entered the following numbers.\n");
//     for (int j = 0; j < i; j++)
//     {
//       printf("%d\n", pRandomNumbers[j]);
//     }
//   }

//   free(pRandomNumbers);
//   // 10k no longer used, but memory not freed
//   // 10k
//   // 10k
//   // 10k
//   // 10k
//   // memory exhausted (memory leak)

//   return 0;
// }

struct product
{
  float price;
  char productName[30];
};

int main()
{
  struct product *pProducts;
  int i, j;
  int numberOfProducts;
  printf("Enter the Number of Products to Store: ");
  scanf("%d", &numberOfProducts);

  pProducts = (struct product *)malloc(numberOfProducts * sizeof(struct product));
  if (pProducts == NULL)
  {
    printf("Memory allocation failed!\n");
    return 1;
  }

  int c;
  while ((c = getchar()) != '\n' && c != EOF)
    ;

  char buffer[256];
  for (i = 0; i < numberOfProducts; ++i)
  {
    printf("Enter a product name: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%29s", pProducts[i].productName);

    printf("Enter a product price: ");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pProducts[i].price);

    // printf("Enter a product name: ");
    // scanf("%s", pProducts[i].productName);

    // printf("Enter a product price: ");
    // scanf("%f", &(pProducts + i)->price);
  }

  printf("Products Stored\n");
  for (j = 0; j < numberOfProducts; ++j)
  {
    printf("%s\t%.2f\n", (pProducts + j)->productName, (pProducts + j)->price);
  }

  free(pProducts);
  return 0;
}