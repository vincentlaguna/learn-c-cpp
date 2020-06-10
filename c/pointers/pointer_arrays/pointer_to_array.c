#include <stdio.h>

int main(void)
{
  int *array_a[2];
  int (*array_b)[2];
  int array_c[2] = {1, 2};
  int var_a = 10;
  int var_b = 20;
  
  array_a[0] = &var_a;
  array_a[1] = &var_b;
  array_b = &(array_c);
  
  printf("Size of a [%d]\n", sizeof(array_a));
  printf("Size of b [%d]\n", sizeof(array_b));
  printf("Size of b [%d]\n", sizeof(array_c));
  printf("Value at array_a is %d\n", *(array_a[0]));
  printf("Value at array_a is %d\n", *(array_a[1]));
  printf("Address of array_b [%p]\n", array_b);
  printf("Address of array_b [%p]\n", &array_c);
  printf("Value at array_b is %d\n", *(array_b[0]));
}