#include <stdio.h>

extern char text[][50];
extern int count;

int fun(void);

int fun2(void)
{
  fun();
}
void foo(void)
{
  extern int i;
  i = 100;
}

void write_extern(void)
{
  printf("count is %d\n", count);
}