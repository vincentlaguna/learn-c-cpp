#include <stdio.h>

int values[100];
int i;
  
int main(void)
{
  for(i = 0; i <= 100; i++)
  printf("Dude, you're in a loop!...\n");
  values[i] = 1;
}