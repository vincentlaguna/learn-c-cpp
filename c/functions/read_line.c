#include <stdio.h>

#define N 10

int read_line(char str[], int n);

int main(void)
{
  char a[N];
  
  read_line(a, N);
  return 0;
}

int read_line(char str[], int n)
{
  int ch, i = 0;
  
  while((ch = getchar()) != '\n')
    if( i < n)
    {
      str[i++] = ch;
    }
  str[i] = '\0'; // Terminates the string
  return i; // Number of characters stored
}