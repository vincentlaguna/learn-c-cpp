#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *base;
  int *p;
  int x;
  // Allocate storage
  base = (int *)malloc(sizeof(int) * 10);
  
  if(base == NULL)
  {
    fprintf(stderr, "Allocation Failure!\n");
    exit(1);
  }
  // Retain *base
  p = base;
  // Fill storage
  for(x = 0; x < 10; x++)
  {
    *p = x * 100;
    // Reference the next integer
    p++;
  }
  puts("Memory allocated and filled.");
  // Output the buffer's contents
  p = base;
  
  for(x = 0; x < 10; x++)
  {
    printf("%d\n", *p);
    p++;
  }
  free(base);
  base = NULL;
  puts("Memory freed! Goodbye!");
  
  return(0);
}