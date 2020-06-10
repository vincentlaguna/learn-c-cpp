#include <stdio.h>

int main(void)
{
  FILE *fp;
  fp = fopen("../file_ops/modify_me.txt", "r+");
  
  if(!fp)
  {
    printf("Failed to open the file. >>> Check if file is missing or non-existent\n");
    return 0;
  }
  else
  {
    fprintf(fp,"The file is ready for reading\n");
  }
  
  fclose(fp); // for closing the file pointer
  return 0;
}