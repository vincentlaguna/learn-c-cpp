#include <stdio.h>

int main(void)
{
  FILE *fp;
  int ch;
  fp = fopen("../file_ops/modify_me.txt", "w+");
  
  for(ch = 33; ch <= 100; ch++)
  {
    fputc(ch, fp);
  }
  fclose(fp);
  return(0);
}