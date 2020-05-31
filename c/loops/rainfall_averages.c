/* This program will find the total rainfall for each year, the average yearly
rainfall, and the average rainfall for each month.
*/

#include <stdio.h>
#define YEARS 5
#define MONTHS 12

int main(void)
{ 
  // Initialize rainfall data for 2011-2015
  float rain[YEARS][MONTHS] = 
  {
    {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.5},
    {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
    {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
    {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
    {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,6.3,5.2},
  };
  // Variable declaration
  int year;
  int month;
  float subTotal;
  float total;
  
  printf("YEAR\t\tRAINFALL (inches)\n");
  
  for(year = 0, total = 0; year < YEARS; year++) // Totals for each year
   {
     for(month = 0, subTotal = 0; month < MONTHS; month++)
     {
       subTotal += rain[year][month];
     }
     printf("[%5d] %15.1f\n", 2010 + year, subTotal);
   }
  
  /*
  printf("[%d]\t[%f]\n", 2010 + 1, avgyr);
  printf("The yearly average is [%f] inches.\n", yearsavg);
  printf("MMONTHLY AVERAGES:\n");
  printf("Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec\n");
  printf("[%f]", monthavg);
  printf("The average rainfall for [%d] is: [%f]\n", year, avgfloat);
  printf("The average rainfall for the month of [%s] is: [%f]\n", month, monthavg);
  printf("The total rainfall for the year [%d] is: [%f]\n", year, total);
  */
  return 0;
}