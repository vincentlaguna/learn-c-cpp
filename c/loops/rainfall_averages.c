/* This program will find the total rainfall for each year, the average yearly
rainfall, and the average rainfall for each month.
*/

#include <stdio.h>
#define YEARS 5
#define MONTHS 12

float averages[[YEARS][MONTHS]] = 
{
  {,,,,,,,,,,,},
  {,,,,,,,,,,,},
  {,,,,,,,,,,,},
  {,,,,,,,,,,,},
  {,,,,,,,,,,,},
}

int main(void)
{ 
  
  for() // Totals for each year
  {
    for() // Totals for month
    {
      
    }
    total // Total rainfall for all years
  }
  printf("YEAR\tRAINFALL (inches)\n");
  printf("[%d]\t[%f]\n", 2010 + 1, avgyr);
  printf("The yearly average is [%f] inches.\n", yearsavg);
  printf("MMONTHLY AVERAGES:\n");
  printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
  printf("[%f]", monthavg);
  printf("The average rainfall for [%d] is: [%f]\n", year, avgfloat);
  printf("The average rainfall for the month of [%s] is: [%f]\n", month, monthavg);
  printf("The total rainfall for the year [%d] is: [%f]\n", year, total);
  return 0;
}