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
  enum suffindex = {st, nd, rd, th};
  struct tm birthday {0};
  char name[30] = {'\0'};
  
  printf("Enter a name: ");
  scanf("%s", name);
  
  return(0);
}