// Finds the largest and smallest elements in an array
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
  int values[N];
  int big;
  int small;
  
  printf("Please enter %d numbers -> ", N);
  for(int i = 0; i < N; i++)
    scanf("%d", &values[i]);
  
  max_min(values, N, &big, &small);
  
  printf("Largest: [%d]\n", big);
  printf("Smallest: [%d]\n", small);
  
  return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
  *max = 0;
  *min = a[0];
  for(int i = 1; i < n; i++)
  {
    if(a[i] > *max)
    {
      *max = a[i];
    }
    else if(a[i] < *min)
    {
      *min = a[i];
    }
  }
}