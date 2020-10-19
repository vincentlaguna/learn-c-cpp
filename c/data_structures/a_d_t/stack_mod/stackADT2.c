#include <stdio.h>
#include <stdlib.h>
#include "stackADT2.h"

struct stackType
{
  Item *pContents;
  int top;
  int size;
};

static void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(int size)
{
  Stack s = malloc(sizeof(struct stackType));
  
  if (s == NULL)
    terminate("Error in create: stack could not be created.\n");
    
  s->pContents = malloc(size * sizeof(Item));
  
  if (s->pContents == NULL)
  {
    free(s);
    terminate("Error in create: stack could not be created.\n");
  }
  s->top = 0;
  s->size = size;
  return s;
}

void destroy(Stack s)
{
  free(s->pContents);
  free(s);
}