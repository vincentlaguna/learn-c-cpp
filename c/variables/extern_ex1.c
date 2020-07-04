#include <stdio.h>

int i = 5;
char text[255][50];
void foo(void);
int count;
/*void write_extern(void)
{
  printf("count is %d\n", count);
}*/
// Instead of defining the function, declare it as extern instead:
extern void write_extern();

int main(void)
{
  printf("%i ", i);
  foo();
  printf("%i\n", i);
  count = 4;
  write_extern();
  return 1;
}