#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  FILE *fp;
  fp = fopen("../file_ops/modify_me.txt", "w+");
  fprintf(fp, "%s %s %s %s %s %s %s %s %s %s", "->This", "string", "of", "characters", "is", "being", "written", "to", "the", "file...\n");
  return(0);
}