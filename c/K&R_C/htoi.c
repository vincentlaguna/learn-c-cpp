#include <stdio.h>
#include <ctype.h>
#define BASE 16
int htoi(char str[]);

int main()
{
  char s[] = "0x1yf";
  printf("Hex string converted: %d\n", htoi(s));
  return 0;
}

int htoi(char s[])
{
  int i, j, m, num = 0;
  char ch[] = "0123456789abcdef";
  
  if ((s[0] == '0') && (s[1] == 'x') || (s[1]) == 'X')
    m = 2;
  else
    m = 0;
  for (i = m; s[i] != '\0'; ++i)
    for (j = 0; j <= BASE; ++j)
      {
        if (tolower(s[i]) == ch[j])
        {
          num = num * 16 + j;
          break;
        }
        if (j == BASE)
          return num;
      }
}
