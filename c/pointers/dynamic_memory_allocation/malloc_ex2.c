#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *str = NULL;
  str = (char*) malloc(15 * sizeof(char)); // Initial memory allocation
  strcpy(str, "Vincent");
  printf("String = %s, Address = [%p]\n", str, str);
  
  str = (char*) realloc(str, 25 * sizeof(char)); // Reallocating memory
  strcat(str, ".com");
  printf("String = %s, Address = [%p]\n", str, str);
  
  free(str); // Memory is free!
  
  return 0;
}