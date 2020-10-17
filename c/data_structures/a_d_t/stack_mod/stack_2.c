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