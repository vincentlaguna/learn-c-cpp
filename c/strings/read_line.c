// Not storing the characters... needs fixing...
#include <stdio.h>
#define N 20

int read_line(char str[], int n);

int main(void)
{ 
  char a[N];
  printf("Enter some characters -> ");
  scanf("%s", &a);
  printf("You have input [%d] characters\n", read_line(a, N));
  return 0;
}

int read_line(char str[], int n)
{
  int ch = 0;
  int i = 0;
  
  while((ch = getchar()) != '\n')
    if(i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}