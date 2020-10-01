#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
  char *pString;
  int stringSize;
  
  stringSize = sizeof("Hello"); // First work out size of "Hello"
  printf("\nSize of 'Hello' is %d\n", stringSize); // Note* 6 bytes (NULL term)
  
  pString = (char *)malloc(stringSize);
  
  if(pString == NULL)
  {
    printf("Malloc failed.\n");
    exit(0);
  }
  // Now copy the string into the newly allocated memory
  strncpy(pString, "Hello", stringSize);
  // Now change the first character to show we can
  printf("pString is %s\n", pString);
  pString[0] = 'c';
  pString[1] ='h';
  printf("pString is %s\n", pString);
  
  return(0);
}