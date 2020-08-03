#include <stdio.h>

int main(void)
{
  int f, *fptr;
  fptr = &f;
  *fptr = 89;
  char string[] = "\nGreetings from the digital realm!\n";
  char *s;
  s = string;
  
  while(*s)
  {
    putchar(*s++);
  }
  
  printf("\nHere is the value of f -> %d\n", *fptr);
  printf("Here is f value + 1 -> %d\n\n", ++*fptr);
  
  return(0);
}