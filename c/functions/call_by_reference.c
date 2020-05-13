#include <stdio.h>

void mySwap(int *x, int *y);

int main(void)
{
  int x = 10;
  int y = 20;
  printf("Values before function call are [%d] [%d] \n", x, y);
  mySwap(&x, &y);
  printf("Values after function call are [%d] [%d]\n", x, y);
  return 0;
}

void mySwap(int *x, int *y)
{
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}