// Passing pointer by reference
/*
#include <stdio.h>
#include <stdlib.h>

#define N 9

void square(int *const x); // int const *x would not let you modify x

int main(void)
{
  int num = 9;
  square(&num);
  printf("The square of [%d] is [%d]\n", N, num);
  return 0;
}

void square(int *const x) // Address not changes, just value
{
  *x = (*x) * (*x); // De-reference pointer so value is changed
}
*/

// Using memory allocation instead
#include <stdio.h>
#include <stdlib.h>

#define N 9

void square(int *x); // int const *x would not let you modify x

int main(void)
{
  int *num = (int*)malloc(sizeof(int));  // Memory allocated for the address of num
  *num = 9;
  square(num);
  printf("The square of [%d] is [%d]\n", N, *num);
  return 0;
}

void square(int *x) // Address not changes, just value
{
  *x = (*x) * (*x); // De-reference pointer so the value is changed
}