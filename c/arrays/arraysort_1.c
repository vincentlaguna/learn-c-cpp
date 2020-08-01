#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
  int numbers[SIZE];
  int x, outer, inner, temp;
  // populate the array
  srand((unsigned)time(NULL));
  
  for(x = 0; x < SIZE; x++)
    numbers[x] = rand() % 100 + 1;
  // display the unsorted array
  for(x = 0; x < SIZE; x++)
    printf(" %3d", numbers[x]);
  printf("\n");

  return 0;
}