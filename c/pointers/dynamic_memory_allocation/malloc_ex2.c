#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *str;
  str = (char*) malloc(15); // Initial memory allocation
  strcpy(str, "Vincent");
  printf("String = %s, Address = [%u]\n", str, str);
  
  str = (char*) realloc(str, 25); // Reallocating memory
  strcat(str, ".com");
  printf("String = %s, Address = [%u]\n", str, str);
  
  free(str); // Memory is free!
  
  return 0;
}