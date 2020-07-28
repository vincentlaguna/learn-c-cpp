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
  
  if(fPtr == NULL) // fopen() return NULL if unable to open file in given mode
  {
    printf("\nUnable to open file!\n");
    printf("Please check whether file exists and you have read privileges\n");
    exit(EXIT_FAILURE);
  }
  return 0;
}

void convertCase(FILE *fptr, const char *path)
{
  
}