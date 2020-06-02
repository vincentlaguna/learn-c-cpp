// needs debugging...

#include <stdio.h>

int main()
{
  char s[] = "28s";
  
  printf("The string '%s' converted to int: %d\n", s, a_toi(s));
  return 0;
}
// atoi: convert s to integer
int a_toi(char s[])
{
  int i, n;
  n = 0;
  for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
    n = 10 * n + (s[i] - '0');
    return n;
}
