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