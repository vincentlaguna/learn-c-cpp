#include <stdio.h>
// Pointer to pointer example
int main(void)
{
  int var_A = 10;
  int *ptr;
  int **ptr2ptr;
  
  ptr = &var_A;
  ptr2ptr = &ptr;
  
  printf("The address of var_A is -> [%u]\n", ptr);
  printf("The address of var_A is -> [%u]\n", *ptr2ptr);
  
  printf("The value of var_A is -> [%d]\n", *ptr);
  printf("The value of var_A is -> [%d]\n", **ptr2ptr);
  return 0;
}