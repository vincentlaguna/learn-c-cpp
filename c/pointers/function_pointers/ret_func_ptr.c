#include <stdio.h>
#include <string.h>

typedef void(*func_ptr)(int, int);
void Add(int, int);
void Sub(int, int);
func_ptr compareValue(int, int);

int main(void)
{
  int varA = 05;
  int varB = 10;
  func_ptr getPtr = NULL;
  getPtr = compareValue(varA, varB);
  (*getPtr)(varA, varB);
  return 0;
}

func_ptr compareValue(int varA, int varB)
{
  if(varA < varB)
  {
    return &Add;
  }
  else
  {
    return &Sub;
  }
}

void Add(int varA, int varB)
{
  printf("Sum is [%d]\n", varA + varB);
}

void Sub(int varA, int varB)
{
  printf("Difference is [%d]\n", varA - varB);
}