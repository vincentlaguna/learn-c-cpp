#include <stdio.h>

int main(void)
{
  int num1;
  printf("Enter a number: ");
  scanf("%d", &num1);
  
  if (num1 & 1)
  {
    printf("%d is an odd number\n", num1);
  } else {
    printf("%d is an even number\n", num1);
  }
}