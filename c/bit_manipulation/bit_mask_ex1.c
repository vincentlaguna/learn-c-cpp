#include <stdio.h>

int main(void)
{
  // Setting bits with OR:
  int flags = 15; // 0000 1111
  int mask = 182; // 1011 0110
  
  // Turning Bits ON (Setting Bits) using OR
  flags = flags | mask; // 1011 1111;
  
  // Turning OFF (clearing bits) using AND
  flags = flags & ~(mask); // 0000 1001
  
  // Toggling of Bits using Exclusive OR:
  flags = flags ^ mask; // 1011 1001
  
  // Checking the value of a bit:
  if((flags & mask) == mask)
    printf("%x %x\n", flags, mask);
    printf("%d %d\n", flags, mask);
    
  return 0;
}