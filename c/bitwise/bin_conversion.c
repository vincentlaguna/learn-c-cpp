#include <stdio.h>
#include <math.h>
#include <stddef.h>

int convertBinaryToDecimal(long long n);

int main(void)
{
  long long n;
  
  printf("Enter a binary number: \n");
  scanf("%lld", &n);
  int result = convertBinaryToDecimal(n);
  
  printf("%lld converted to decimal is -> %d\n", n, result);
  
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
}