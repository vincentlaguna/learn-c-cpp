#include <stdio.h>
#include "stack.h"

#define STACK_SIZE 100

static int contents[STACK_SIZE];

int main(void)
{
  for (int i = 0; i < 10; i++)
  {
    push(i);
  }
  for (int i = 0; i < 10; i++)
  {
    printf("%d\n", contents[i]);
  }
  return(0);
}