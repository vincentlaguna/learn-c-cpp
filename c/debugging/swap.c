#include <stdio.h>
#define SWAP
//#define TEXT

int main(void)
{
  int x = 3;
  int y = 5;
  int tmp;
  
  puts("\nTesting SWAP program -->-->-->");
  printf("\nCurrent values: %d, %d\n", x, y);
  #ifdef SWAP
    tmp = x;
    x   = y;
    y   = tmp;
  #endif
  
  printf("After swap: %d, %d\n\n", x, y);
  
  puts("Testing TEXT program -->-->-->");
  
  #ifndef TEXT
    printf("\nTEXT is not #defined\n\n");
  #else
    printf("\nTEXT is #defined\n\n");
  #endif
  
  return(0);
}