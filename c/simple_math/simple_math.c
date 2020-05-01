#include <stdio.h>
#include "math.h"

int main(void)
{
  printf("Add : %X\n",math_add(0x0FFF1111, 0x0FFF1111)); //4 byte hex number
  printf("Sub : %X\n", math_sub(0x0FFF1111, 0x0FFF1111));
  printf("Mul : %lld\n", math_mul(0x0FFF1111, 0x0FFF1111));
  printf("Div : %0.1f\n", math_div(100, 8.0)); // float precision
  return 0;
}