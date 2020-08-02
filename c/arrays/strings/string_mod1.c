#include <stdio.h>
#include <ctype.h>

void modify(char *s);

int main(void)
{
  char string[64];
  
  printf("\nType some text: ");
  fgets(string, 64, stdin);
  modify(string);
  puts("\nHere is your modified string -> \n");
  printf("%s\n", string);
  
  return 0;
}

void modify(char *s)
{
  
}