#include <stdio.h>

int sumOfRange(int n1);
int findGCD(int a, int b);
char * reverse(char *str);

int main(void)
{
  int n1 = 0;
  int sum = 0;
  int num1 = 0;
  int num2 = 0;
  int gcd = 0;
  char str[100];
  char *rev = NULL;
  // Sum of numbers recursion function
  printf("\n\nRecursion: Calculate the sum of numbers from 1 to n: \n");
  printf("----------------------------------------------------\n");
  printf("\nInput the last number of the range starting from 1: ");
  scanf("%d", &n1);
  printf("\n\nThe sum of numbers from 1 to %d -> %d\n\n", n1, sumOfRange(n1));
  // Find GCD recursion function
  printf("\nRecursion: Find the GCD of 2 numbers: \n");
  printf("----------------------------------------------------\n");
  printf("\nInput the first number: ");
  scanf("%d", &num1);
  printf("\nInput the second number: ");
  scanf("%d", &num2);
  gcd = findGCD(num1, num2);
  printf("\nThe GCD of numbers %d and %d -> %d\n\n", num1, num2, gcd);
  // Reverse a string using recursion
  printf("\nRecursion: Reversing an input string: \n");
  printf("----------------------------------------------------\n");
  printf("\nEnter the string to reverse: ");
  scanf("%s", str);
  printf("\nThe original string is - > %s\n\n", str);
  rev = reverse(str);
  printf("\nThe reversed string is -> %s\n\n", rev);
  
  return(0);
}

int sumOfRange(int n1)
{
  int result = 0;
  
  if(n1 == 1)
    return 1;
  result = n1 + sumOfRange(n1 - 1);
  printf(" + %d", n1);
  return result;
}

int findGCD(int a, int b)
{
  while(a !=b)
  {
    if(a > b)
      return findGCD(a - b, b);
    return findGCD(a, b - a);
  }
  return a;
}

char * reverse(char *str)
{
  static int i = 0;
  static int j = 0;
  static char rev[100];
  
  if(*str)
  {
    printf("Iteration %d = %s\n", j++, str);
    reverse(str + 1);
    rev[i++] = *str;
    printf("%d = %c \n", i, *str);
  }
  return rev;
}