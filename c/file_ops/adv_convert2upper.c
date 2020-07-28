#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void convertCase(FILE *fptr, const char *path);

int main(void)
{
  FILE *fPtr = NULL; // File pointer to hold reference of input file
  char path[100];
  
  printf("Enter path of source file: ");
  scanf("%s", path); // Not &path, because it is already a reference to that address
  
  fPtr = fopen(path, "r");
  return 0;
}

void convertCase(FILE *fptr, const char *path)
{
  
}