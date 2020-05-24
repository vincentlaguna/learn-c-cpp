#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int minutesEntered = 0;
  double years = 0.0;
  double days = 0.0;
  int minutesInYear = 0;
  
  printf("Please enter minutes to convert to years: ");
  scanf("%d", &minutesEntered);
  minutesInYear = (60 * 24 * 365);
  years = (minutesEntered / minutesInYear);
  days = (minutesEntered / 60.0) / 24.0;
  printf("%d minutes is approximately %lf years and %f days.\n",
  minutesEntered, years, days);
  return 0;
}
