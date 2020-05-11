#include <stdio.h>

void myFunc(int value1, int value2);

int main(void)
{
  printf("\nPassing values to function...\n");
  myFunc(10, 20);
  return 0;
}

void myFunc(int value1, int value2)
{
  printf("\nValues are [%d] and [%d] \n", value1, value2);
  return;
}