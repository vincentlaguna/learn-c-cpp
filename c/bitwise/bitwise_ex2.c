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
  
  signed int comp1 = 2;
  signed int result = 0;
  
  signed int comp2 = 154;
  signed int result2 = 0;
  
  
  and3 = and1 & and2; // AND
  //and3 = and1 & 3; // Will set all the bits in w3 to 0, except the right-most 2 bits
  printf("25 & 77 -> %d\n", and3);
  
  //0000000000011001 = Binary 25
  //0000000001001101 = Binary 77
  //----------------
  //0000000000001001 = Decimal 9
  
  or3 = or1 | or2; // OR
  printf("147 | 61 -> %d\n", or3);
  
  //10010011 = Binary 147
  //00111101 = Binary 61
  //----------------
  //10111111 = Decimal 191
  
  xor3 = xor1 ^ xor2; // XOR
  printf("147 ^ 61 -> %d\n", xor3);
  
  //10010011 = Binary 147
  //00111101 = Binary 61
  //----------------
  //10101110 = Decimal 174
  
  //Example of a typical swap routine (also see *bubblesort):
  //temp = c1;
  //c1 = c2;
  //c2 = temp; // Following is the same using exclusive OR:
  
  printf("Before swap -> [%d], [%d]\n", c1, c2);
  
  c1 ^= c2;
  c2 ^= c1;
  c1 ^= c2;
  
  printf("After swap using exclusive OR -> [%d], [%d]\n", c1, c2);
  
  //Example of a number's compliment:
  
  //00000010
  //11111101 = -3 of 2's compliment but represented 253? Need to clarify...
  
  //0000 0011 = 3
  //1111 1100 = 252?
  
  //1111 1101 = 253?

  result = ~(comp1);
  printf("2's compliment -> %d\n", result);
  
  //Second Example:
  
  //10011010 = 154
  //-------- 
  //01100101 = 2's compliment = -155 use to turn -155 by doing:
  
  //10011011 = Flip the bits, add 1 
  //01100100 + 1 = 155, 01100101
  result2 = ~(comp2);
  printf("2's compliment on 154 -> %d\n", result2);
  
  //One's comliment operator: ~ (useful when you do not know the qty 
  //you are dealing with in an operation)
  //To set the low-order bit of an int called w1 to 0, you can AND w1 with an 
  //int consisting of all 1's except for a single 0 in the rightmost bit:
  int w1;
  w1 &= 0xFFFFFFFE;
  printf("normal int -> %x\n", w1);
  //works fine on machines in which an int is represented by 32 bits...
  //if you replace the preceding statement with:
  w1 &= ~1;
  printf("using 1's compliment for portabilty -> %x\n", w1);
  
  return 0;
}