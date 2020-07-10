#include <stdio.h>

long long convertDecimalToBinary(int n);

int main(void)
{
  int num1 = 0;
  int num2 = 0;
  long long b_num1 = 0;
  long long b_num2 = 0;
  
  int d_numLeftShiftResult = 0;
  
  long long b_numComplimentResult = 0;
  long long b_num2ComplimentResult = 0;
  long long b_num1ANDnum2Result = 0;
  long long b_num1ORnum2Result = 0;
  long long b_num1EXORnum2REsult = 0;
  long long b_num1LeftShiftResult = 0;
  
  printf("Enter an integer (number input): ");
  scanf("%d", &num1);
  
  printf("Enter another integer (bit position): ");
  scanf("%d", &num2);
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