#include <stdio.h>

int main(void)
{
  int *array_ptr[3];
  int i = 1, j = 2, k = 3;
  int ct;
  array_ptr[0] = &i;
  array_ptr[1] = &j;
  array_ptr[2] = &k;
  
  for (ct = 0; ct < 3; ct++)
  {
    printf("Address [%u] value [%d]\n", array_ptr[ct], *array_ptr[ct]);
  }
  return 0;
}