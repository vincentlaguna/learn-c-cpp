#include <stdio.h>
//../file_ops/modify_llorem.txt..
int main(void)
{
  FILE *fp;
  fpos_t position;
  fp = fopen(".../file_ops/modify_me.txt", "w+");
  fgetpos(fp, &position);
  fputs("Hello, World!", fp);
  fseek(fp, 7, SEEK_SET);
  fputs("Hello, how are you?", fp);
  fsetpos(fp, &position);
  fputs("This is going to override the previous content", fp);
  fclose(fp);
  return 0;
}