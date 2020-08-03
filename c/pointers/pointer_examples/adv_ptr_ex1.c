#include <stdio.h>

int main(void)
{
  char *string = "Greetings from the digital realm!\n";
  
  while(*string != '\0')
  {
    putchar(*string);
    string++;
  }
  return(0);
}