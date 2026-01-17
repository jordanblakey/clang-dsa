#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
  printf("char:   Min: %d | Max: %d (Size: %zu byte)\n", CHAR_MIN, CHAR_MAX, sizeof(char));
  printf("short:  Min: %d | Max: %d (Size: %zu bytes)\n", SHRT_MIN, SHRT_MAX, sizeof(short));

  printf("--- Integer Types ---\n");
  printf("int:    Min: %d | Max: %d\n", INT_MIN, INT_MAX);
  printf("long:   Min: %ld | Max: %ld\n", LONG_MIN, LONG_MAX);

  printf("\n--- Floating Point Types ---\n");
  // %e is used for scientific notation because these numbers are huge
  printf("float:  Min: %e | Max: %e\n", FLT_MIN, FLT_MAX);
  printf("double: Min: %e | Max: %e\n", DBL_MIN, DBL_MAX);

  printf("\n--- Precision Info ---\n");
  printf("float decimal digits:  %d\n", FLT_DIG);
  printf("double decimal digits: %d\n", DBL_DIG);

  double max = DBL_MAX;
  printf("\n--- Floating point decimal vs Hex representation ---\n");
  printf("Decimal view:  %e\n", max);
  printf("Native Hex:   %a\n", max); // notice the mantissa has a 1 and digits maxed to the right of the decimal

  printf("\n%f", (double)0.1);
  printf("\n%e", (double)0.1);
  printf("\n%a\n", (double)0.1);

  return 0;
}