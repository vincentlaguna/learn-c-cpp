#include <stdio.h>

int increment_ptr(int *ptr);

int main(void)
{
  int varA = 10;
  int *ptr_A;
  ptr_A = &varA;
  printf("Address before increment [%u]\n", ptr_A);
  ptr_A = increment_ptr(&varA);
  printf("Address after increment [%u]\n", ptr_A);
  return 0;
}

int *increment_ptr(int *ptr)
{
  return ptr++;
}