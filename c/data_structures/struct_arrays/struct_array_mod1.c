#include <stdio.h>

int main(void)
{
  struct weather
  {
    char day[10];
    float temp;
  };
  
  struct weather week[7] = 
  {
    { "Sunday", 72.5 },
    { "Monday", 68.4 },
    { "Tuesday", 75.0 },
    { "Wednesday", 73.8 },
    { "Thursday", 65.1 },
    { "Friday", 72.8 },
    { "Saturday", 75.2 }
  };
  
  struct weather t;
  int x, outer, inner;
  // Display array
  puts("\nUnsorted Temperature Array -> \n");
  
  for(x = 0; x < 7; x++)
    printf("%10s %.1f degrees\n", week[x].day, week[x].temp);
  // Sorted array
  for(outer = 0; outer < 7; outer++)
    for(inner = outer; inner < 7; inner++)
    {
      if(week[outer].temp > week[inner].temp)
      {
        t = week[inner];
        week[inner] = week[outer];
        week[outer] = t;
      }
    }
  // Display sorted array
  puts("\nSorted Array -> \n");
  
  for(x = 0; x < 7; x++)
    printf("%10s %.1f degrees\n", week[x].day, week[x].temp);
  putchar('\n');
  
  return(0);
}