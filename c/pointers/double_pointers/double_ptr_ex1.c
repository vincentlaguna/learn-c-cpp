#include <stdio.h>
#include <stdlib.h>

void foo(int *ptr)
{
  int a = 5;
  ptr = &a;
}

int main(void)
{
  return(0);
}