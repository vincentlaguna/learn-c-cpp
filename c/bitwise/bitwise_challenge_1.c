#include <stdio.h>

long long convertDecimalToBinary(int n);

int main(void)
{
  int num1 = 0;
  int num2 = 0;
  long long b_num1 = 0;
  long long b_num2 = 0;
  
  int d_numLeftShiftResult = 0;
  
  long long b_num1ComplementResult = 0;
  long long b_num2ComplementResult = 0;
  long long b_num1ANDnum2Result = 0;
  long long b_num1ORnum2Result = 0;
  long long b_num1ExORnum2Result = 0;
  long long b_num1LeftShiftResult = 0;
  
  printf("Enter an integer (number input): ");
  scanf("%d", &num1);
  
  printf("Enter another integer (bit position): ");
  scanf("%d", &num2);
  
  b_num1 = convertDecimalToBinary(num1);
  b_num2 = convertDecimalToBinary(num2);
  
  int d_num1LeftShiftResult = num1 << 2;
  
  b_num1ComplementResult = convertDecimalToBinary(~num1);
  b_num2ComplementResult = convertDecimalToBinary(~num2);
  b_num1ANDnum2Result = convertDecimalToBinary(num1 & num2);
  b_num1ORnum2Result = convertDecimalToBinary(num1 | num2);
  b_num1ExORnum2Result = convertDecimalToBinary(num1 ^ num2);
  b_num1LeftShiftResult = convertDecimalToBinary(num1 << 2);
    
  printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", num1, b_num1, b_num1ComplementResult);
  printf("The result of applying the ~ operator on number %d (%lld) is: %lld \n", num2, b_num2, b_num2ComplementResult);
  printf("The result of applying the & operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ANDnum2Result);
  printf("The result of applying the | operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ORnum2Result);
  printf("The result of applying the ^ operator on number %d (%lld) and number %d (%lld) is: %lld \n", num1, b_num1, num2, b_num2, b_num1ExORnum2Result);
  printf("The result of applying the left shift operator << on number %d (%lld) by 2 places is number %d (%lld)\n", num1, b_num1, d_num1LeftShiftResult, b_num1LeftShiftResult);
  
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