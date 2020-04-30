#include <stdio.h>

int main()
{
  function_add_numbers(12, 13, 14);
  function_add_numbers(-20, 20, 14);
  
  int valueA = 90, valueB = 70;
  
  function_add_numbers(valueA, valueB);
  
  return 0;
}
// function definition

void function_add_numbers(int a, int b, int c) 
{
  int sum;
  sum = a + b + c;
  printf("Sum = %d\n", sum);
}