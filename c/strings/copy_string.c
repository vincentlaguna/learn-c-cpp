// replaying the strcat function for practice
#include <stdio.h>
#include <string.h>

char *strcaty(char *s1, const char *s2);
int main(void)
{
  char str1[] = "Hello, World!";
  char str2[] = "";
  strcaty(str1, str2);
  printf("%s, %s\n", str1, str2);
  return 0;
}

char *strcaty(char *s1, const char *s2)
{
  char *p = s1;
  while(*p != '\0')
    p++;
  while(*s2 != '\0')
  {
    *p = *s2;
    s2++;
  }
  *p = '\0';
  return s1;
}