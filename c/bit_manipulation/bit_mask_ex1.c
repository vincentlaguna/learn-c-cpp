#include <stdio.h>

int main(void)
{
  // Setting bits with OR:
  int flags = 15; // 0000 1111
  int mask = 182; // 1011 0110
  
  flags = flags | mask; // 1011 1111;
  
  // Turning OFF (clearing bits) using AND
  flags = flags & ~(mask); // 0000 1001
  
  return 0;
}