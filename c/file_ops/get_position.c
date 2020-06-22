#include <stdio.h>
//../file_ops/modify_llorem.txt..
int main(void)
{
  FILE *fp;
  fpos_t position;
  fp = fopen("/file_ops/modify_me.txt", "w+");
  fgetpos(fp, &position);
  fputs("Hello, World!", fp);
  fclose(fp);
  return 0;
}