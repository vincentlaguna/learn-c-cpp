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
  puts("Time challenges -> TEST");
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
  time_t current_time = 0;
  char *current_t_string;
  current_time = time(NULL);
  
  if(current_time == ((time_t) - 1))
  {
    (void) fprintf(stderr, "Failed to get the current time.\n");
    exit(EXIT_FAILURE);
  }
  // Convert to local time format
  current_t_string = ctime(&current_time);
  
  if(current_t_string == NULL)
  {
    (void) fprintf(stderr, "Failed to convert the current time.\n");
    exit(EXIT_FAILURE);
  }
  (void) printf("\n The Current Time is: %s \n", current_t_string);
  //exit(EXIT_SUCCESS);
  // Challenge #4
  time_t now = 0;
  time(&now);
  struct tm beg_month;
  beg_month = *localtime(&now);
  beg_month.tm_hour = 0;
  beg_month.tm_min = 0;
  beg_month.tm_sec = 0;
  beg_month.tm_mday = 1;

  double seconds = difftime(now, mktime(&beg_month));
  
  printf(" %.f seconds passed since the beginning of the month.\n\n", seconds);
  exit(EXIT_SUCCESS);
  
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