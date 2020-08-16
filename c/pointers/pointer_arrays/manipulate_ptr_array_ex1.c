#include <stdio.h>
#include <stdlib.h>

void get_input(char **b);

// Create the array of pointers and output the results
int main(void)
{
  char *names[5];
  int x;
  // Print the names
  for(x = 0; x < 5; x++)
  {
    printf("Name #%d: %s\n", x++);
    get_input(names[x]);
  }
  return(0);
}

void get_input(char **b)
{
  
}