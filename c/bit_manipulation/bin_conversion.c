/**************************************************************
* NOTES:                                                      *
*                                                             *
* -Remember that reading values from right to left:           *
*                                                             *
* 1st position value = 2^0 (i.e. one)                         *
* 2nd position value = 2^1 (i.e. two)                         *
* 3rd position value = 2^2 (i.e. four)                        *
* 4th position value = 2^3 (i.e. eight)                       *
* 5th position value = 2^4 (i.e. sixteen)                     * 
* etc...                                                      *
*                                                             *
* -for each digit; multiply the digit by it's position value  *
* -add up all the products to get the final result            *
*                                                             *
* Example: Binary value of 01101001 is decimal 105. See below *
*                                                             *
*  128   64   32   16   8   4   2   1                         *
* --------------------------------------------                *
*  0     1    1    0    1   0   0   1                         *
*                                                             *
*                                   1x1 = 1                   *
*                               0x2     = 0                   *
*                           0x4         = 0                   *
*                       1x8             = 8                   *
*                  0x16                 = 0                   *
*             1x32                      = 32                  *
*        1x64                           = 64                  *
*  0x128                                = 0                   *
* -------------------------------------_______                *
*                                       = 105                 *    
*                                                             *
**************************************************************/

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