#include <stdio.h>
#include <stdlib.h>

long long recursion_function(long long n);

int main(void)
{
  long long input;
  printf("\nRecursion Function ->\n");
  printf("\nPlease enter integer for factorial: ");
  scanf("%lld", &input);
  if(input > 25)
  {
    printf("Integer value too big for factorial!\n");
    exit(1);
  }
  printf("\nOutput ->  ");
  printf(" = %lld\n", recursion_function(input));
  putchar('\n');
  return(0);
}

long long recursion_function(long long n)
{
  if(n == 0)
    return(1);
    printf("%lld * ", n);
  return (n * recursion_function(n-1)); 
}