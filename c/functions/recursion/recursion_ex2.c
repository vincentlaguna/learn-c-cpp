#include <stdio.h>

int f1(int x);

int main(void)
{
  int n;
  n = f1(5);
  
  printf("%d\n", n);
  
  return(0);
}

int f1(int x)
{
  int b;
  
  if(x == 1)
    return 1;
  else
    b = x * f1(x - 1);
    
    return b;
}