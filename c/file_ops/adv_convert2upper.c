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
    printf("Please check whether file exists and you have read privilege\n");
    exit(EXIT_FAILURE);
  }
  
  convertCase(fPtr, path);
  
  return 0;
}

void convertCase(FILE *fptr, const char *path)
{
  FILE *dest = NULL; // Create temp file
  char ch = '\0'; // NULL character
  
  dest = fopen("tempo.txt", "w"); // Temp file to store result in
  
  if(dest == NULL) // If unable to create temp file
  {
    printf("Unable to create temporary file.");
    fclose(fptr);
    exit(EXIT_FAILURE);
  }
  
  while((ch = fgetc(fptr)) != EOF) // Repeat until the end of the file
  {
    // If current character is uppercase = toggle to lowercase and viceversa
    if(isupper(ch))
      ch = tolower(ch);
    else if(islower(ch))
      ch = toupper(ch);
    
    fputc(ch, dest); // Print toggled character to destination file
  }
  // Close all files to release resource
  fclose(fptr);
  fclose(dest);
  
  remove(path); // Delete original source file
}