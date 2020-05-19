#include <stdio.h>

int main(void)
{
  char a[] = {"Hello World!"};
  int n = sizeof(a);
  for (int i = 0; i < n; i++)
  {
    printf("[%6d %c]\n", a[i], (i % 10 == 9 || i == n - 1) ? '\n' : ' ');
  }
}