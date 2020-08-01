#include <stdio.h>

#define SIZE 10

void displayArray(int *a);

int main(void)
{
  int numbers[SIZE] = { 55, 44, 99, 11, 77, 22, 33, 88, 66, 0};
  int outer, inner, temp;
  // Display the unsorted array
  puts("Unsorted array ->");
  displayArray(numbers);
  // Sort the array
  for(outer = 0; outer < SIZE; outer++)
    for(inner = outer + 1; inner < SIZE; inner++)
    {
      if(numbers[outer] > numbers[inner])
      {
        temp = numbers[outer];
        numbers[outer] = numbers[inner];
        numbers[inner] = temp;
        displayArray(numbers);
      }
    }
  // Display sorted array
  puts("\nSorted Array -> \n");
  displayArray(numbers);
  return 0;
}

void displayArray(int *a)
{
  int x;
  
  for(x = 0; x < SIZE; x++)
    printf(" %3d", a[x]);
  putchar('\n');
}