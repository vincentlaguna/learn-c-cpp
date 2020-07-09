#include <stdio.h>

int main(void)
{
  short int w1 = 25;
  short int w2 = 77;
  short int w3 = 0;
  
  w3 = w1 & w2;
  printf("%d\n", w3);
  
  //0000000000011001 // Binary 25
  //0000000001001101 // Binary 77
  //----------------
  //0000000000001001 = Decimal 9
  return 0;
}