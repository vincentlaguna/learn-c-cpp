#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *storage;
  int x;
  // Use malloc to set the buffer size to store 5 integers
  storage = (int *)malloc(sizeof(int) * 5);
  
  if(storage == NULL)
  {
    fprintf(stderr, "Memory Allocation Failed!\n");
    exit(1);
  }
  puts("Memory Allocated");
  // Initialize the output values
  for(x = 0; x < 5; x++)
  {
    *(storage + x) = (x + 1) * 11;
    printf("%d\n", *(storage + x));
  }
  // Now increase the buffer size by two integer values
  storage = (int *)realloc(storage, sizeof(int) * 7);
  
  if(storage == NULL)
  {
    fprintf(stderr, "Reallocation Failed!\n");
    exit(1);
  }
  puts("Buffer re-sized");
  // Add the final two values
  *(storage + 5) = 66;
  *(storage + 6) = 77;
  // Output the results
  for(x = 0; x < 7; x++)
    printf("%d\n", *(storage + 1));
  // Release the allocated memory
  free(storage);
  storage = NULL;
  puts("Memory freed!");
  // It is unnecessary to free() storage before a program quits,
  // but if you plan on re-using the pointer, or it's allocated within
  // a function, do free() it and assign it to the symbolic constant NULL
  return(0);
}