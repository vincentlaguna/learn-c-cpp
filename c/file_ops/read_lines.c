#include <stdio.h>
#include <stdlib.h>
//#define FILENAME "../file_ops/modify_llorem.txt"

int main(void)
{ 
  FILE *fp = NULL;
  char ch;
  int linesCount = 0;
  fp = fopen("../file_ops/modify_llorem.txt", "r");
  
  if(fp == NULL)
  {
    printf("File does not exist...\n");
  }
  while((ch = fgetc(fp)) != EOF)
  {
    if(ch == '\n')
      linesCount++;
  }
  fclose(fp);
  fp = NULL;
  
  printf("Total number of lines are -> [%d]\n", linesCount);
  return 0;
}