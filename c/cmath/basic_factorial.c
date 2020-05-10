#include <stdio.h>
unsigned int factorial(int value);

int main(void) 
{
printf("Factor: %d\n", factorial(5));
}

unsigned int factorial(int value)
{
  unsigned int fact = 1;
  int i;
  for (i = 1; i <= value; i++)
  {
    fact *= i;
  }
  return fact;
}