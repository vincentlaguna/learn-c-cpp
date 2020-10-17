#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node
{
  int data;
  struct node *pNext;
};

static struct node *pTop = NULL;

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

void  makeEmpty(void)
{
  while (!isEmpty())
  {
    pop();
  }
}

bool  isEmpty(void)
{
  return pTop == NULL;
}

bool  isFull(void)
{
  return false;
}

void  push(int i)
{
  struct node *newNode = malloc(sizeof(struct node));
  if (newNode == NULL)
    terminate("Error in Push: Stack is Full.\n");
  
  newNode->data = i;
  newNode->pNext = pTop;
  pTop = newNode;
}

int   pop(void)
{
  
}