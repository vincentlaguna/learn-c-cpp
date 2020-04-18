#include <stdio.h>
// test power function
int power(int m, int n);

int main()
{
  int i;
for (i = 0; i < 31; ++i)
  printf("%d %d %d\n", i, power(2, i), power(-3, i));
  return 0;
}
// power: raise base to n-th power; n >= 0
/* v.1 
int power(int base, int n)
{
  int i, p;
p = 1;
  for (i = 1; i <= n; ++i)
    p = p * base;
  return p;
}
*/
// v.2 using the "call by value" property
int power(int base, int n)
{
  int p;
  
for (p = 1; n > 0; --n)
    p = p * base;
  return p;
}