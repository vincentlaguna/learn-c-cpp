#include <stdio.h>
/*
int main(void)
{
  char ch;
  int len = 0;
  
  printf("Enter a message: ");
  ch = getchar();
  while(ch != '\n')
  {
    len++;
    ch = getchar();
  }
  printf("Your message was [%d] character(s) long.\n", len);
  return 0;
}
*/
// Refactored:

int main(void)
{
  int len = 0;
  
  printf("Enter a message: ");
  
  while(getchar() != '\n')
    len++;
  printf("Your message was [%d] character(s) long.\n", len);
  return 0;
}