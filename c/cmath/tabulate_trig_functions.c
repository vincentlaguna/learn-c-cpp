#include <stdio.h>
#include <math.h>

void tabulate(double (*f)(double), double first, double last, double incr);

int main(void)
{
  puts("Trig TEST!");

  double final, increment, initial;
  
  printf("Enter initial value: ");
  scanf("%lf", &initial);
  printf("Enter final value: ");
  scanf("%lf", &final);
  printf("Enter increment: ");
  scanf("%lf", &increment);
  
  printf("\n     x         cos(x)"
         "\n  --------    --------\n");
  tabulate(cos, initial, final, increment);
  
  printf("\n     x         sin(x)"
         "\n  --------    --------\n");
  tabulate(sin, initial, final, increment);
  
  
  return(0);
}

void tabulate(double (*f)(double), double first, double last, double incr)
{
  
}