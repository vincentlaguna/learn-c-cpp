#include <stdio.h>

int *Print(int *begin, int *end)
{
  if(begin == end) 
    return 0;
    int *largest = begin;
    
    for(; begin != end; begin++)
    {
      printf("[%d]\n", *begin);
      
      if(*largest < *begin)
      {
        largest = begin;
      }
    }
    return largest;
}

int main(void)
{
  int numbers[] = {1, 5, 4, 2, 3};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int *largest = Print(numbers, numbers + size);
  
  if(largest)
  {
    printf("Largest is [%d]\n", *largest);
  }
  return 0;
}