#include <stdio.h>
#include <ctype.h>
#include "readline.h"

int read_line(char str[], int n)
{
  int i = 0;
  int ch = 0;
  
  while(isspace(ch = getchar()))
    ;
  while(ch != '\n' && ch != EOF)
  {
    if(i < n)
      str[i++] = ch;
    ch = getchar();
  }
  str[i] = '\0';
  return i;
}