#include <stdio.h>
#include <stdint.h>

int main(void)
{
  uint8_t someData[10] = {0xff, 0xff, 0xff, 0xff, 0xff, 
                          0xff, 0xff, 0xff, 0xff, 0xff};
  
  printf("0th element value -> %x\n", someData[0]);
  // same as *(someData + 0) // deferenced point to 0th element
  printf("2nd data item = %x\n", *(someData +1)); // de-referenced value
  *(someData + 1) = 0x9; 
  // Same as someData[1] = 0x9 (pointing to second element in array)
  printf("After : 2nd data item = %x\n", *(someData+1));
  
  return 0;
}