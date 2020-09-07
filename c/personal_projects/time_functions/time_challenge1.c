#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//#define N 50
#define NUM 40
// Function Proto-types
void fillArray(double ar[], int n);
void showArray(const double ar[], int n);
int myComp(const void *p1, const void *p2);
// MAin Function
int main(void)
{
  puts("Time challenge 1 TEST");
  /* // Challenge #1
  int i = 0;
  char str = '\0';
  // Use srand with seed
  srand(time(NULL));
  printf("%d\n", N);
  // Generate 50 random numbers (-0.5 to 0.5)
  for(i = 1; i <= N; i++)
  {
    printf("%0.4lf\n", (rand() % 2001 - 1000) / 2.e3);
  }
  */
  // Challenge #2
  double vals[NUM];
  fillArray(vals, NUM);
  puts("\nRandom List: ");
  showArray(vals, NUM);
  // Use of qsort();
  qsort(vals, NUM, sizeof(double), myComp);
  puts("\nSorted List: ");
  showArray(vals, NUM);
  putchar('\n');
  // Challenge #3
  return(0);
}
// Create a function that takes a double array and a size parameter
// which generates some random double values
void fillArray(double ar[], int n)
{
  int index = 0;
  
  for(index = 0; index < n; index++)
    ar[index] = (double)rand() / ((double) rand() + 0.1);
}
// Create a function that shows the array (takes a double array and size)
void showArray(const double ar[], int n)
{
  int index;
  
  for(index = 0; index < n; index++)
  {
    printf("%9.4f ", ar[index]);
    if(index % 6 == 5)
      putchar('\n');
  }
  if(index % 6 != 0)
    putchar('\n');
}

int myComp(const void *p1, const void *p2)
{
  // Type cast the void pointers to doubles in order to access the values
  const double *a1 = (const double *)p1;
  const double *a2 = (const double *)p2;
  
  if(*a1 < *a2)
    return -1;
  else if(*a1 == *a2)
    return 0;
  else
    return 1;
}