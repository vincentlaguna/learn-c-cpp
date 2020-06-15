#include <stdio.h>

struct Time
{
  struct Date
  {
    int date;
    int month;
    int year;
  } dob; // Variable instance of Time.Date declared
  // (does not exist outside of Date struct)
  
  int hour;
  int minutes;
  int seconds;
};

int main(void)
{
  // code implementation to be completed...
  return 0;
}