#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y, int z)
{
  char c = 2;
  int *a = NULL;
  
  #ifdef DEBUG
    fprintf(stderr, "x = %x\n", x);
    fprintf(stderr, "y = %d\n", y);
    fprintf(stderr, "z = %d\n", z);
    fprintf(stderr, "a = %ld\n", (long)a);
}