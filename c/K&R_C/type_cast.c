#include <stdio.h>

int main(void)
{
  /*unsigned char data = 0x87 + 0x0089; //0x8A
  //unsigned char data = 0x00000001 + 0x00000089 */
  unsigned char data = (unsigned char) (0x87 + 0xFF00); //type-casting
  float result = (float) 80 / 3; //80: explicit casting, 3: implicit casting
  printf("Data : %u result : %f\n", data, result);
  
  return 0;
}