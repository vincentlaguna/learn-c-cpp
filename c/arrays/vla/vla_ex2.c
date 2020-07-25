// Variable-length array challenge: use input for length and calculate sum
#include <stdio.h>

int main(void)
{
  int i;
  int sum = 0;
  int size;
  int myArray[size];
  
  printf("Please enter number of elements to input: \n");
  scanf("%d", &size);
  
  printf("Please enter %d elements -> \n", size);
  for(i = 0; i < size; i++)
    scanf("%d", &myArray[i]);
  
  for(i = 0; i < size; i++)
    sum += myArray[i];
    
  printf("The sum of the elements is: [%d]\n", sum);
  
  return 0;
}