#include <stdio.h>

void myFunc(int);

int main(void)
{
  int arg_1 = 10;
  printf("Value before function call [%d]\n", arg_1);
  myFunc(arg_1);
  printf("Value after function call [%d]\n", arg_1);
  return 0;
}

void myFunc(int arg_1)
{
  arg_1--;
  printf("Value inside function call [%d]\n", arg_1);
}