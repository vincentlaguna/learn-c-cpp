/* Examples:
  // Set/Clear Bits
  mask = 0b00001000;
  uint8_t x = x | mask;
  x = x & ~mask; // clear bit
  // Read Bits
  if((x & mask))
    // bit 3 is 1
  else
    // bit 3 is 0
  // Invert Bits
  x = x ^ mask;
*/
#include <stdio.h>
#include <stdint.h>
#define MASK(x) ((unsigned char)(1<<x))
// In Port B: Set bits 2 and 5, Clear bits 0, 3, and 7
//            If bit 4 is high, then invert bit 1
void manage_port_B(void);

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
  manage_port_B();
  
  return 0;
}

void manage_port_B(void)
{
  int PTBD[] = {1,0,0,1,1,1,0,1};
  printf("PTBD value -> %s\n", PTBD);
  uint8_t temp;
  temp = PTBD; // freeze PTBD's value                  00000100
  temp = temp | (MASK(2) | MASK(5)); //              | 00100000
  //                                                 = 00100100
  
  //                                                  00000001  
  temp = temp & ~(MASK(0) | MASK(3) | MASK(7)); //  | 00001000
  //                                                = 10001001
  if(temp & MASK(4))
    temp = temp ^ MASK(1);
  PTBD = temp; // Commit the changes in PTBD
  printf("Modified PTBD value -> %s\n", PTBD);
}