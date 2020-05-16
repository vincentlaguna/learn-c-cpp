#include <stdio.h>

typedef unsigned char byte;

int main(void)
{
  int i = 123;
  float f = 1.23f;
  double d = 2.34;
  char c = 'c';
  
  unsigned ui = 123u;
  short si = 123;
  long li = 123;
  
  byte b = 0x12;
  
  printf("%d (%d)\n", i, (int) sizeof(int));
}