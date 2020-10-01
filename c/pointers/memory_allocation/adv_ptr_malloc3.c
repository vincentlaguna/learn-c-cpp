#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  char *pString;
  int stringSize;
  
  stringSize = sizeof("Hello"); // First work out size of "Hello"
  printf("\nSize of 'Hello' is %d\n", stringSize);
  
  return(0);
}