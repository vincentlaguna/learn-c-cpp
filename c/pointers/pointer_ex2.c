#include <stdio.h>

int main(void)
{
  int var_A = 10;
  
  printf("The value of A is -> [%d]\n", var_A);
  printf("The address of A is -> [%u]\n", &var_A);
  printf("The value of A is -> [%d]\n", *(&var_A));
  return 0;
}