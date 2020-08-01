#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(void)
{
  int numbers[SIZE];
  int x, outer, inner, temp;
  // Populate the array
  srand((unsigned)time(NULL));
  
  for(x = 0; x < SIZE; x++)
    numbers[x] = rand() % 100 + 1;
  // Display the unsorted array
  for(x = 0; x < SIZE; x++)
    printf(" %3d", numbers[x]);
  printf("\n");
  // Sort the array
  for(outer = 0; outer < SIZE; outer++)
    for(inner = outer+1; inner < SIZE; inner++)
    {
      if(numbers[outer] > numbers[inner])
      {
        temp = numbers[inner];
        numbers[inner] = numbers[outer];
        numbers[outer] = temp;
      }
    }
    // Displays the sorted array
    printf("\nSorted Array -> \n\n");
    for(x = 0; x < SIZE; x++)
      printf(" %3d", numbers[x]);
    printf("\n");
    
  return 0;
}