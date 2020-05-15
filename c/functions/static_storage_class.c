#include <stdio.h>

void display();

int main(void)
{
  for(int i = 0; i <= 10; i++)
  {
    display();
  }
  return 0;
}

void display()
{
  static int x;
  printf("The value of x is [%d]\n", x);
  x++;
}