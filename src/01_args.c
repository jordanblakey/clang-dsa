#include <stdio.h>

int main(int argc, char **argv)
{
  for (int i = 0; i < argc; i++)
  {
    printf("Argument %d: %s\n", i, argv[i]);
  }

  return 0;
}

// argc is the number of command line arguments, the first being the executable itself.
// argv is the
// 01_args arg1 arg2 ->
// Argument 0: ./dist/01_args
// Argument 1: arg1
// Argument 2: arg2
