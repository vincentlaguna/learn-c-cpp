#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXSTRLEN 100

char *stringFunction(char *aString);

int main(int argc, char **argv)
{
  puts("\nExample of memory allocation in a string function >>>\n");
  
  printf(stringFunction("Vincent"));
  printf(stringFunction("Laguna"));
  
  printf("\n");
  return(0);
}

char *stringFunction(char *aString)
{
  char *pString;
  pString = (char *)malloc(sizeof(MAXSTRLEN));
  pString[0] = 0;
  strcat(pString, "Hello ");
  strcat(pString, aString);
  strcat(pString, "\n");
  return pString;
}