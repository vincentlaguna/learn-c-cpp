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