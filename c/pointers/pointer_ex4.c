#include <stdio.h>

int main(void)
{
  float var_A = 3.1416;
  float *ptr_A;
  ptr_A = &var_A;
  printf("Address [%u]\n", ptr_A);
  printf("Value [%lf]\n", *ptr_A);
  return 0;
}