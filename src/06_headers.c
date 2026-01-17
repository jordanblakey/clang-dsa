#include <stdlib.h>
#include <stdio.h>
#include <arithmetic.h>

int main()
{
  int c = add(2, 3);
  printf("add(2, 3): %d \n", c);

  int d = sub(2, 3);
  printf("sub(2, 3): %d \n", d);

  double e = divide(2, 3);
  printf("divide(2, 3): %f \n", e);     // fixed
  printf("divide(2, 3): %.15f \n", e);  // fixed
  printf("divide(2, 3): %.16f \n", e);  // fixed
  printf("divide(2, 3): %.17f \n", e);  // fixed
  printf("divide(2, 3): %.200f \n", e); // fixed - can see the rounding artifacts
  printf("divide(2, 3): %e \n", e);     // scientific
  printf("divide(2, 3): %g \n", e);     // smart
  printf("divide(2, 3): %a \n", e);     // hex

  double f = multiply(2, 3);
  printf("multiply(2, 3): %f \n", f);
  printf("multiply(2, 3): %e \n", f);
  printf("multiply(2, 3): %g \n", f);
  printf("multiply(2, 3): %a \n", f);

  return 0;
}