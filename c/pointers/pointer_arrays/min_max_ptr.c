#include <stdio.h>

#define N 10

int min_max(int *ptrA);

int main(void)
{
  int values[N];
  int i;
  
  printf("Please enter %d numbers -> ", N);
  for(i = 0; i < N; i++)
    scanf("%d",&values[i]);
  min_max(values);
  return 0;
}

int min_max(int *ptrA)
{
  int min = 0;
  int max = 0;
  for(int i = 0; i < N; i++)
    if(ptrA[i] > min)
     {
      max = ptrA[i];
     }
  else if(i < max)
  {
    min = ptrA[i];
  }
  printf("Min value: [%d], Max value: [%d]\n", min, max);
}