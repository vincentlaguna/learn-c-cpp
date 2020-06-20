#include <stdio.h>

int main(void)
{
  FILE *fp;
  int c;
  fp = fopen("../file_ops/modify_me.txt", "r");
  
  if(fp == NULL)
  {
    perror("Error opening the file");
    return(-1);
  }
  // read a single char
  while((c = fgetc(fp)) != EOF)
  {
    printf("%c", c);
  }
  fclose(fp);
  fp = NULL;
  return(0);
} // return from main