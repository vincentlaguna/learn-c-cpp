#include <stdio.h>

int main(void)
{
  unsigned int a = 60; // 0011 1100
  unsigned int b = 13; // 0000 1101
  int result = 0;
  
  //result = a & b;
  // 0000 1100 = 12
  //result = a | b;
  // 0011 1101 = 61
  //result = a ^ b;
  // 0011 0001 = 49
  //result = ~a;
  // 1100 0011 = -61
  //result = a << 4;
  // 0011 1100 0000 = 960
  result = a >> 4;
  // 0000 0011 = 3 (bit loss)
  printf("result is : [%d]\n", result);
  return 0;
}