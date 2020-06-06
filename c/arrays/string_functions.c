#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char str[100];
  char name[25][50];
  char temp[25];
  int n;
  int j;
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
  
  printf("\n\nSorts the strings of an array using bubble sort");
  
  printf("Input number of strings: ");
  scanf("%d", &n);
  
  printf("Input string [%d] -> ", n);
  
  for(i = 0; i <= n; i++)
  {
    scanf("%s", name[i]);
  }
  
  for(i = 1; i <= n; i++)
    for(j = 0; j <= n-i; j++)
      if(strcmp(name[j], name[j+1]) > 0)
      {
        strcmp(temp, name[j]);
        strncpy(name[j], name[j+1]);
        strncpy(name[j+1], temp);
      }
  
  return 0;
}