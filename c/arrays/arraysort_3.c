#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int compare(const void *a, const void *b);

int main(void)
{
  int numbers[SIZE];
  int x;
  srand((unsigned)time(NULL));
  // Populate the array
  for(x = 0; x < SIZE; x++)
    numbers[x] = rand() % 100 + 1;
  // Display the unsorted array
  puts("Unsorted Array -> \n");
  for(x = 0; x < SIZE; x++)
    printf(" %3d", numbers[x]);
  putchar('\n');
  // Sort the array
  qsort(numbers, SIZE, sizeof(int), compare);
  // Display the sorted array
  puts("\nSorted Array -> \n");
  for(x = 0; x < SIZE; x++)
    printf(" %3d", numbers[x]);
  putchar('\n');

  return 0;
}

int compare(const void *a, const void *b)
{
  int x;
  return(*(int *)a - *(int *)b);
}