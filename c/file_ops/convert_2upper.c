#include <stdio.h>
#include <stlib.h>

int main(void)
{
  FILE *fp = NULL;
  FILE *fp1 = NULL;
  char ch = '';
  
  fp = fopen("../file_ops/modify_llorem.txt", "r");
  
  if(fp == NULL)
    return(-1);

  fp1 = fopen("temp.txt", "w");
  
  if(fp1 == NULL)
    return(-1);
    
  while((ch = fgetc(fp)) != EOF )
  {
    if(isLower(ch))
    {
      ch = ch - 32; // ASCII lower-case
    }
  }
  
  fclose(fp);
  return 0;
}