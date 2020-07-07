// Example of using complex numbers in C
#include <stdio.h>
#include <math.h>
#include <complex.h>

int main(void)
{
  double _Complex z1 = I * I; // (I) Imaginary unit squared defined in complex.h
  printf("I * I = %.1f %+.1fi\n", creal(z1), cimag(z1));
  
  double _Complex z2 = pow(I, 2);
  printf("pow(I, 2) = %.1f %+.1fi\n", creal(z2), cimag(z2));
  
  double _Complex PI = acos(-1);
  double _Complex z3 = /*exp*/(I * PI); // Euler's formula
  printf("exp(I * PI) = %.1f %+.1fi\n", creal(z3), cimag(z3));
  
  return 0;
}