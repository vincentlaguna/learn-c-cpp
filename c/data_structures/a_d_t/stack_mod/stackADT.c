#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define STACK_SIZE 100

struct stackType
{
  int contents[STACK_SIZE];
  int top;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s = malloc(sizeof(struct stackType));
  
  if (s == NULL)
    terminate("Error in create: stack could not be created.\n");
    
  s->top = 0;
  return s;
}

void destroy(Stack s)
{
  free(s);
}

void makeEmpty(Stack s)
{
  s->top = 0;
}

bool isEmpty(Stack s)
{
  return s->top == 0;
}

bool isFull(Stack s)
{
  return s->top == STACK_SIZE;
}

void push(Stack s, int i)
{
  if (isFull(s))
    terminate("Error in push: stack is full.\n");
    
  s->contents[s->top++] = i;
}

int pop(Stack s)
{
  if (isEmpty(s))
    terminate("Error in pop: stack is empty.\n");
  
  return s->contents[--s->top];
}