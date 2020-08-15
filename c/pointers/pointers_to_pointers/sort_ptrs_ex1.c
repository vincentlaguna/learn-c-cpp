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
  putchar('\n');
  return(0);
}