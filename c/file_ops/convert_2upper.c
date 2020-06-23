#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
  FILE *fp = NULL;
  FILE *fp1 = NULL;
  char ch = ' ';
  
  fp = fopen("../file_ops/modify_llorem.txt", "r");
  
  if(fp == NULL)
    return(-1);

  fp1 = fopen("../file_ops/temp.txt", "w");
  
  if(fp1 == NULL)
    return(-1);
    
  while((ch = fgetc(fp)) != EOF )
  {
    if(islower(ch))
    {
      ch = ch - 32; // ASCII lower-case
    }
    fputc(ch, fp1);
  }
  
  fclose(fp);
  fclose(fp1);
  
  rename("../file_ops/temp.txt", "../file_ops/modify_llorem.txt"); // Rename temp file
  remove("../file_ops/temp.txt"); // Remove temp file
  
  fp = fopen("../file_ops/modify_llorem.txt", "r");
  
  if(fp == NULL)
    return(-1);
    
  while((ch = fgetc(fp)) != EOF)
  {
    printf("%c", ch);
  }
  
  fclose(fp);
  fp = NULL;
  fp1 = NULL;
  
  return 0;
}