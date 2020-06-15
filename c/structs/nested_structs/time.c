#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct Time
{
  struct Date
  {
    int date;
    int month;
    int year;
  } now; // Variable instance of Time.Date declared
  // (does not exist outside of Date struct)
  
  int hour;
  int minutes;
  int seconds;
};

  struct Date *nowPtr;
  nowPtr = now;
  nowPtr->date = 07;
  // code implementation to be completed...
  return 0;
}