#include <stdio.h>

int main()
{
  int i, j;
  for (i = 0, j = 1;(i <= 10) && (j < 20); i++, j+=2)
  {
    printf("i %d j %d\n", i, j);
  }
  return 0;
}