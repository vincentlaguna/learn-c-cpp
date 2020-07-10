#include <stdio.h>

int main(void)
{
  short int and1 = 25;
  short int and2 = 77;
  short int and3 = 0;
  
  short int or1 = 147;
  short int or2 = 61;
  short int or3 = 0;
  
  short int xor1 = 147;
  short int xor2 = 61;
  short int xor3 = 0;
  
  short int z1 = 147;
  short int z2 = 61;
  short int z3 = 0;
  
  short int c1 = 147;
  short int c2 = 61;
  short int temp = 0;

  
  and3 = and1 & and2; // AND
  //and3 = and1 & 3; // Will set all the bits in w3 to 0, except the right-most 2 bits
  printf("%d\n", and3);
  
  //0000000000011001 // Binary 25
  //0000000001001101 // Binary 77
  //----------------
  //0000000000001001 = Decimal 9
  
  or3 = or1 | or2; // OR
  printf("%d\n", or3);
  
  //10010011 // Binary 147
  //00111101 // Binary 61
  //----------------
  //10111111 = Decimal 191
  
  xor3 = xor1 ^ xor2; // XOR
  printf("%d\n", xor3);
  
  //10010011 // Binary 147
  //00111101 // Binary 61
  //----------------
  //10101110 = Decimal 174
  
  //temp = c1;
  //c1 = c2;
  //c2 = temp; // Following is the same using exclusive OR:
  
  c1 ^= c2;
  c2 ^= c1;
  c1 ^= c2;
  
  printf("%d %d\n", c1, c2);
  
  // Next is one's compliment:
  // Code it!
  
  return 0;
}