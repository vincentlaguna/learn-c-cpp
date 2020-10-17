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
  top = 0;
}

bool  isEmpty(void)
{
  return top == 0;
}

bool  isFull(void)
{
  return top == STACK_SIZE;
}

void  push(int i)
{
  if (isFull())
    terminate("Error in Push: Stack is Full.\n");
  contents[top++] = i;
}

int   pop(void)
{
  if (isEmpty())
    terminate("Error in Pop: Stack is Empty.\n");
  return contents[--top];
}