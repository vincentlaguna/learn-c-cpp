// Nested for-loop using a factorial example
#include <stdio.h>

int main()
{
  int factorial;
  int inner_count;
  int outer_count;
  
  factorial = 1;
  
  for (outer_count = 1; outer_count < 10; outer_count++)
  {
    inner_count = 1;
    for (inner_count = 1; inner_count <= outer_count; inner_count++)
    {
      factorial *= inner_count;
    }
  printf("Factorial of %d is %d\n", outer_count, factorial);
  factorial = 1;
  }
  return 0;
}