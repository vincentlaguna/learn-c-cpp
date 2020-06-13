// Finds the largest and smallest elements in an array
// Produces segmentation fault, needs fixing!!!
#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);
int find_largest(int a[], int n, int *largest);

int main(void)
{
  int values[N];
  int big;
  int small;
  int largest;
  
  printf("Please enter %d numbers -> ", N);
  for(int i = 0; i < N; i++)
    scanf("%d", &values[i]);
  
  max_min(values, N, &big, &small);
  find_largest(values, N, &largest);
  
  printf("Largest: [%d]\n", big);
  printf("Smallest: [%d]\n", small);
  printf("Find largest again -> [%d]\n", largest);
  
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

int find_largest(int a[], int n, int *largest)
{
  largest = 0;
  
  for(int i = 1; i < n; i++)
  {
    if(a[i] > *largest)
    {
      a[i] = *largest;
    }
  }
  return *largest;
}