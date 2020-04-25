#include <stdio.h>

int main()
{
  int year;
  
  printf("Please enter year to check if it is a leap year: ");
  scanf("%d", &year);
  
  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
    printf("%d is a leap year\n", year);
  }
  else {
    printf("%d is not a leap year\n", year);
  }
}