#include <stdio.h>

void MinMax(int *begin, int *end, int **smallest, int **largest)
{
  if(begin == end)
  {
    *smallest = 0;
    *largest = 0;
  }
  else
  {
    *smallest = *largest = begin;
    
    while(++begin != end)
    {
      if(*begin < **smallest)
      {
        *smallest = begin; 
      }
      if(*begin > **largest)
      {
        *largest = begin;
      }
    }
  }
}

int main(void)
{
  int values [] = {5, 2, 4, 3, 6};
  int size = sizeof(values) / sizeof(values[0]);
  int *smallest = 0;
  int *largest = 0;
  
  MinMax(values, values + size, &smallest, &largest);
  printf("min = [%d], max = [%d]\n", *smallest, *largest);
}