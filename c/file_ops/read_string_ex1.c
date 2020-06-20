#include <stdio.h>

int main(void)
{
  FILE *fp;
  char str[60];
  // opening file for reading
  fp = fopen("../file_ops/modify_me.txt", "r");
  
  if(fp == NULL)
  {
    perror("Error opening file");
    return(-1);
  }
  if(fgets(str, 60, fp) != NULL)
  {
    // writing to stdout
    printf("%s", str);
  }
  fclose(fp);
  fp = NULL;
  return(0);
} // end main