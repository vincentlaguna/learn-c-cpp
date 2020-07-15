#include <stdio.h>

int min(int *array, int arrayLength);
int max(int *array, int arrayLength);

int main(void)
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

int max(int *array, int arrayLength)
{
  int mx = array[0];
  
  for(int i = 0; i <= arrayLength - 1; i ++)
  {
    if(array[i] > mx)
      mx = array[i];
  }
  return mx;
}