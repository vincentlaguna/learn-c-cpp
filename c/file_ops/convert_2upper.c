#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *fp;
  fp = fopen("../file_ops/modify_llorem.txt", "w+");
  
  if(fp == NULL)
  {
    perror("Error opening the file");
    return(-1);
  }
  
  fclose(fp);
  return 0;
}