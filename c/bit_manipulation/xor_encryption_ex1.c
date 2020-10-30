// Performs XOR encryption
#include <stdio.h>
#include <ctype.h>

#define KEY '&'

int main(void)
{
  puts("XOR Encryption Test >>> \n");
  
  int orig_char;
  int new_char;
  
  while ((orig_char = getchar()) != EOF)
  {
    new_char = orig_char ^ KEY;
    
    if (isprint(orig_char) && isprint(new_char))
      putchar(new_char);
    else
      putchar(orig_char);
  }
  return(0);
}