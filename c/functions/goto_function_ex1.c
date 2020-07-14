#include <stdio.h>

int main(void)
{
  const int maxInput = 5;
  int i = 0;
  double number, average, sum = 0.0;
  
  for(i = 1; i <= maxInput; ++i)
  {
    printf("%d. Enter a number: ", i);
    scanf("%lf", &number);
  }
  
  return 0;
}