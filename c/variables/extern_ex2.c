#include <stdio.h>

int x = 15;
void first(void);
void second(void);

int main(void)
{
  extern int x;
  
  printf("x in main() is -> [%d]\n", x); // 15
  first(); // 25
  printf("x in main() after first() is -> [%d]\n", x); // 15
  second(); // 35
  printf("x in main() after second() is -> [%d]\n", x); // 35
  
  return 0;
}

void first(void)
{
  int x;
  x = 25;
  printf("x in first() is [%d]\n", x);
}

void second(void)
{
  x = 35; 
  // changing the value of extern because here, x is not defined within function block
  printf("x in second() is -> [%d]\n", x);
}