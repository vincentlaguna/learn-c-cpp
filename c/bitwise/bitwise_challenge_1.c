#include <stdio.h>

long long convertDecimalToBinary(int n);

int main(void)
{
  return 0;  
}

long long convertDecimalToBinary(int n)
{
  long long binaryNumber = 0;
  int remainder = 1;
  int i = 1;
  
  while(n != 0)
  {
    remainder = n % 2;
    n /= 2;
    binaryNumber += remainder * i;
    i *= 10;
  }
  return binaryNumber;
}