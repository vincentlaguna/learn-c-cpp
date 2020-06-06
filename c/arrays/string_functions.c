#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char str[100];
  int l;
  int i;
  
  printf("\n\nPrint individual characters of string in reverse order: \n");
  printf("------------------------------------------------------\n");
  printf("Input the string: ");
  scanf("%s", str);
  
  l = strlen(str);
  printf("The characters in the string in reverse are: \n");
  
  for(i = l-1; i >= 0; i--)
  {
    printf("[ %c ] ", str[i]);
  }
  printf("\n");
  printf("------------------------------------------------------\n");
  return 0;
}