#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double), double first, double last, double incr);

int main(void)
{
  double final, increment, initial;
  printf("Enter initial value: ");
  scanf("%lf", &initial);
  
  puts("Trig TEST!");
  
  return(0);
}

void tabulate(double (*f)(double), double first, double last, double incr)
{
  
}