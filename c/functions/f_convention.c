#include <stdio.h>

int myFunc(int value1, int value2);

int main(void)
{
  int sum;
  printf("\nPassing values to function...\n");
  sum = myFunc(10, 20);
  printf("\nThe sum returned by the function is [%d] \n", sum);
  return 0;
}

int myFunc(int value1, int value2)
{
  printf("\nValues are [%d] and [%d] \n", value1, value2);
  return value1 + value2;
}