#include <stdio.h>
#define SWAP

int main(void)
{
  int x = 3;
  int y = 5;
  int tmp;
  
  puts("Testing SWAP program -->-->-->");
  printf("Current values: %d, %d\n", x, y);
  #ifdef SWAP
    tmp = x;
    x   = y;
    y   = tmp;
  #endif
  
  printf("After swap: %d, %d\n", x, y);
  
  return(0);
}