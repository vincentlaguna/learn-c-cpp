#include <stdio.h>
#include <string.h>

int Add(int, int);
int Sub(int, int);
int Mul(int, int);
int doOperation(int, int, int (*func_ptr)(int, int));

int main(void)
{
  int varA = 10;
  int varB = 20;
  printf("Addition : [%d]\n", doOperation(varA, varB, &Add));
  printf("Subtraction : [%d]\n", doOperation(varA, varB, &Sub));
  printf("Multiply : [%d]\n", doOperation(varA, varB, &Mul));
  return 0;
}

int doOperation(int varA, int varB, int (*func_ptr)(int, int))
{
  return (func_ptr(varA, varB));
}

int Add(int varA, int varB)
{
  return varA + varB;
}

int Sub(int varA, int varB)
{
  return varA - varB;
}

int Mul(int varA, int varB)
{
  return varA * varB;
}