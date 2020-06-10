#include <stdio.h>

int main(void)
{
  char charater;
  FILE *fp;
  fp = fopen("../file_ops/modify_me.txt", "r");
  
  if(!fp)
  {
    printf("Failed to open the file\n");
    return 0;
  }
  do
  {
    charater = fgetc(fp);
    printf("%c", charater);
  } while(charater != EOF);
  
  fclose(fp); // for closing the file pointer
  
  return 0;
}