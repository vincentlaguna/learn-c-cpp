#include <stdio.h>
#include <math.h>
#include <stddef.h>

int convertBinaryToDecimal(long long n);
int convertDecimalToBinary(long long n);

int main(void)
{
  long long n;
  int result;
  
  printf("Enter a binary number: \n");
  scanf("%lld", &n);
  result = convertBinaryToDecimal(n);
  
  printf("%lld converted to decimal is -> %d\n", n, result);
  
  printf("Enter a decimal number: \n");
  scanf("%lld", &n);
  result = convertDecimaltoBinary(n);
  
  printf("%d converted to binary is -> %lld\n", n, result);
  
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

int convertDecimalToBinary(long long n)
{
  int binaryNumber = 0;
  int i = 0;
  int remainder = 0;
  
}