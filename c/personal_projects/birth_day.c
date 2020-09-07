#include <stdio.h>
#include <time.h>

int main(void)
{
  const char *day[7] = {"Sunday", "Monday", "Tuesday",
                        "Wednesday", "Thursday", "Friday", "Saturday"};
  const char *month[12] = {"January", "February", "March", "April",
                           "May", "June", "July", "August",
                           "September", "October", "November", "December"};
  const char *suffix[] = {"st", "nd", "rd", "th"};
  enum suffindex {st, nd, rd, th} sufsel = th; // Suffix selector
  struct tm birthday = {0}; // A birthday time structure
  char name[30] = {'\0'};
  
  printf("Enter a name: ");
  scanf("%s", name);
  
  printf("Enter the birthday for %s as: day month year, "
         "e.g. Enter 7th of May 1986 as 7 5 1986 : ", name);
  scanf("%d %d %d", &birthday.tm_mday, &birthday.tm_mon, &birthday.tm_year);
  
  birthday.tm_mon -= 1; // Month is zero-based
  birthday.tm_year -= 1900; // Year is relative to 1900
  
  if(mktime(&birthday) == - 1)
  {
    fprintf(stderr, "Operation Failed.\n");
    return -1;
  }
  
  return(0);
}