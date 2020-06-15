#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct date
  {
    int month;
    int day;
    int year;
  };

  struct date today; 
  struct date *datePtr;
  datePtr = &today;

  datePtr->month = 06;
  datePtr->day = 14;
  datePtr->year = 2020;

  printf("Today's date is -> [%i/%i/%.2i]\n", datePtr->month, datePtr->day, datePtr->year % 100);
  return 0;
}