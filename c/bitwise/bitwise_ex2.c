#include <stdio.h>

int main(void)
{
  short int w1 = 25;
  short int w2 = 77;
  short int w3 = 0;
  
  short int x1 = 147;
  short int x2 = 61;
  short int x3 = 0;
  
  short int z1 = 147;
  short int z2 = 61;
  short int z3 = 0;
  
  w3 = w1 & w2;
  //w3 = w1 & 3; // Will set all the bits in w3 to 0, except the right-most 2 bits
  printf("%d\n", w3);
  
  //0000000000011001 // Binary 25
  //0000000001001101 // Binary 77
  //----------------
  //0000000000001001 = Decimal 9
  
  x3 = x1 | x2;
  printf("%d\n", x3);
  
  //10010011 // Binary 147
  //00111101 // Binary 61
  //----------------
  //10111111 = Decimal 191
  
  z3 = z1 ^ z2;
  printf("%d\n", z3);
  
  //10010011 // Binary 147
  //00111101 // Binary 61
  //----------------
  //10101110 = Decimal 174
  
  return 0;
}