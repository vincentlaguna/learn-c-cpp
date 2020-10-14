#include <stdio.h>

int findSum(int n);

int main(void)
{
  int multiples;
  
  multiples = findSum(10);
  
  printf("%d\n", multiples);
  
  return(0);
}

int findSum (int n)
{
  int multiples = 0;
  
  for(int i = 1; i <= n; i++)
  {
    if(i % 3 == 0 || i % 5 == 0)
      multiples += i;
      printf("%d ", multiples);
  }
  printf("\n");
  return multiples;
}