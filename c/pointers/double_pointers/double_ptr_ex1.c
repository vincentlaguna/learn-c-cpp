#include <stdio.h>
#include <stdlib.h>

void foo(int *ptr)
{
  int a = 5;
  //ptr = &a; // This is just a LOCAL copy, it will not work
  *ptr = a;
}

int main(void)
{
  int *ptr = NULL;
  ptr = (int *) malloc(sizeof(int));
  *ptr = 10;
  
  printf("De-referernced pointer value -> %d\n", *ptr);
  
  foo(ptr);
  printf("De-Referenced pointer value after foo() function -> %d\n", *ptr);
  
  return(0);
}