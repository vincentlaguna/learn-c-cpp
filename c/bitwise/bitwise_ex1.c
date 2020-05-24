#include <stdio.h>

int main(void)
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0;
  
  result = a & b;
  // 0000 1100
  printf("result is : [%d]\n", result);
  return 0;
}