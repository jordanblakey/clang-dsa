#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *my_array = malloc(5 * sizeof(int));
  if (my_array == NULL)
  {
    return 1;
  }
  for (int i = 0; i < 5; i++)
  {
    my_array[i] = i * 10;
    printf("%d ", my_array[i]);
  }

  my_array[100] = 99;
  printf("%d ", my_array[100]); // -> 99

  printf("%d ", my_array[98]);  // -> 0
  printf("%d ", my_array[101]); // -> 0
  my_array[9000000] = 1;        // SIGSEGV (Address boundary error)

  free(my_array);
  return 0;
}
