#include <stdio.h>

int recursion_function(int n);

int main(void)
{
  printf("Recursion Function ->\n");
  printf("= %d\n", recursion_function(10));
  return(0);
}

int recursion_function(int n)
{
  if(n == 0)
    return(1);
    printf("%d * ", n);
  return (n * recursion_function(n-1)); 
}