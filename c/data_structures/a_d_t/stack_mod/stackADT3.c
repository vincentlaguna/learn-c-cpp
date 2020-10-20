#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

struct node
{
  Item data;
  struct node *pNext;
};

struct stackType
{
  struct node *pTop;
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
    
  s->pTop = NULL;
  return s;
}

void destroy(Stack s)
{
  makeEmpty(s);
  free(s);
}

void makeEmpty(Stack s)
{
  while (!isEmpty(s))
    pop(s);
}

bool isEmpty(Stack s)
{
  return s->pTop == NULL;
}

bool isFull(Stack s)
{
  return false;
}

void push(Stack s, Item i)
{
  struct node *newNode = malloc(sizeof(struct node));
  
  if (newNode == NULL)
    terminate("Error in push: stack is full.\n");
    
    newNode->data = i;
    newNode->pNext = s->pTop;
    s->pTop = newNode;
}

Item pop(Stack s)
{
  struct node *oldTop;
  Item i;
  
  if (isEmpty(s))
    terminate("Error in pop: stack is empty.\n");
    
  oldTop = s->pTop;
  i = oldTop->data;
  s->pTop = oldTop->pNext;
  free(oldTop);
  
  return i;
}