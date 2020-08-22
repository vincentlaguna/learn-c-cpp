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
  #endif
  
  *a = 5;
  
  #ifdef DEBUG
    fprintf(stderr, "*a = %d\n", *a);
  #endif
  
  return (c + x + y + z + *a) / 3;
}

int main(int argc, char *argv[])
{
  int i, j, k;
  int result;
  
  #ifdef DEBUG
    fprintf(stderr, "Number of parameters = %d\n", argc);
  #endif
  
  if(argc == 1)
  {
    printf("Please specify three numbers as parameters.\n");
    exit(1);
  }
  
  i = atoi(argv[1]);
  
  #ifdef DEBUG
    fprintf(stderr, "i = %d\n", i);
  #endif
  
  j = atoi(argv[2]);
  
  #ifdef DEBUG
    fprintf(stderr, "j = %d\n", j);
  #endif
  
  k = atoi(argv[3]);
  
  #endif
    fprintf(stderr, "k = %d\n", k);
  #endif
  
  
}