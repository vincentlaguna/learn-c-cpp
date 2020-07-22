#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint8_t a = 60; // 0011 1100 //60
  uint8_t b = 13; // 0000 1101 //13
  int result = 0;
  
  //result = a & b;
  // 0000 1100 = 12
  //result = a | b;
  // 0011 1101 = 61
  //result = a ^ b;
  // 0011 0001 = 49
  //result = ~a;
  // 1100 0011 = -61
  //result = a << b;
  // 0011 1100 0000 = 960
  result = a >> b;
  // 0000 0011 = 3 (bit loss)
  printf("result is : [%d]\n", result);
  
  // Set/Clear Bits
  mask = 0b00001000;
  uint8_t x = x | mask;
  x = x & ~mask;
  
  return 0;
}