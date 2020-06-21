// Write a string to a file
#include <stdio.h>

int main(void)
{
  FILE *filePointer;
  filePointer = fopen("../file_ops/modify_me.txt", "w+");
  
  fputs("\n>>>...writing to file...\n", filePointer);
  fputs("-> ***Your changes have been written to this file***\n\n", filePointer);
  fclose(filePointer);
  return(0);
}