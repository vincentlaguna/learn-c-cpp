#include <stdio.h>

int findSum(int n);

int main(void)
{
  int multiples;
  
  multiples = findSum(5);
  
  printf("%d\n", multiples);
  
  return(0);
}

int findSum (int n)
{
  int multiples_i = 0;
  int multiples_j = 0;
  
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      if(j % 3 == 0)
      {
        multiples_j += j;
        printf(" %d", multiples_j);
      }
      else
      {
        multiples_j = 0;
      }
    }
    printf("\n");
    if(i % 5 == 0)
    {
      multiples_i += i;
      printf(" %d", multiples_i);
    }
    else
    {
      multiples_i = 0;
    }
  }
  printf("\n");
  return multiples_i + multiples_j;
}
