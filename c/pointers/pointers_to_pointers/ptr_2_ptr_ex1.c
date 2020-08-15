#include <stdio.h>
#include <stdlib.h>

void fill(int **n);

int main(void)
{
  int *numbers;
  int x;
  return(0);
}

void fill(int **n)
{
  int x;
  *n = (int *)malloc(sizeof(int) * 4);
  if(*n == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  for(x = 0; x < 4; x++)
  {
    *(*n + x) = *(x + 1) * 11;
  }
  putchar('\n');
}