#include <stdio.h>
#include <math.h>
#include <stddef.h>

int convertBinaryToDecimal(long long n);
long long convertDecimalToBinary(long long n);

int main(void)
{
  long long n;
  int b;
  int result;
  long long resultB;
  
  printf("Enter a binary number: \n");
  scanf("%lld", &n);
  result = convertBinaryToDecimal(n);
  
  printf("%lld converted to decimal is -> %d\n", n, result);
  
  printf("Enter a decimal number: \n");
  scanf("%d", &b);
  resultB = convertDecimalToBinary(b);
  
  printf("%lld converted to binary is -> %lld\n", n, resultB);
  
  return 0;
}

int convertBinaryToDecimal(long long n)
{
  int decimalNumber = 0;
  int i = 0;
  int remainder = 0;
  
  while(n != 0)
  {
    remainder = n % 10;
    n = n / 10; // breaks out of the loop when 0
    decimalNumber += remainder * (i * i);
    i++;
  }
  return decimalNumber;
}

long long convertDecimalToBinary(long long n)
{
  long long binaryNumber = 0;
  int i = 1;
  int remainder = 1;
  
  while(n != 0)
  {
    remainder = n % 2;
    n = n / 2;
    binaryNumber += remainder * i;
    i = i * 10;
  }
  return binaryNumber;
}