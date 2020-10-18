#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define STACK_SIZE 100

struct stackType
{
  int contents[STACK_SIZE];
  int top;
};

