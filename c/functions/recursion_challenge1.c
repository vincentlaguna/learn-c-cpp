#include <stdio.h>

int sumOfRange(int n1);

int main(void)
{
  int n1 = 0;
  int sum = 0;
  
  printf("\n\nRecursion: Calculate the sum of numbers from 1 to n: \n");
  printf("----------------------------------------------------\n");
  printf("\nInput the last number of the range starting from 1: ");
  scanf("%d", &n1);
  sumOfRange(n1);
  printf("\nThe sum of numbers from 1 to %d -> %d\n\n", n1, sum);
  return(0);
}

int sumOfRange(int n1)
{
  int result = 0;
  
}