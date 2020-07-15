#include <stdio.h>

int min(int *array, int arrayLength);
int max(int *array, int arrayLength);

int main(main)
{
  
  return 0;
}

int min(int *array, int arrayLength)
{
  int mn = array[0];
  
  for(int i = 0; i <= arrayLength - 1; i++)
  {
    if(array[i] < mn)
      mn = array[i];
  }
  return mn;
}
