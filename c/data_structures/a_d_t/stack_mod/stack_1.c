#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

#define STACK_SIZE 100

static int contents[STACK_SIZE];
static int top = 0;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void  makeEmpty(void)
{
  
}

bool  isEmpty(void)
{
  
}

bool  isFull(void)
{
  
}

void  push(int i)
{
  
}

int   pop(void)
{
  
}