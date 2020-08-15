#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *weekdays[7] = {"Sunday", "Monday", "Tuesday", "Wednesday",
		                "Thursday", "Friday", "Saturday"};
  char *temp;
  int x, y;
  puts("Unsorted:\n");
  // Unsorted array
  for(x = 0; x < 7; x++)
  {
    printf("%s\n", weekdays[x]);
  }
  // Bubble sort the array
  for(x = 0; x < 6; x++)
  {
    for(y = x + 1; y < 7; y++)
    {
      // Sort alphabetically
      if(strcmp(weekdays[x], weekdays[y]) > 0)
      {
        temp = weekdays[x];
        weekdays[x] = weekdays[y];
        weekdays[y] = temp;
      }
    }
  }
  putchar('\n');
  return(0);
}