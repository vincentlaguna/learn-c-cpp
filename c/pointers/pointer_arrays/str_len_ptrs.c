#include <stdio.h>

int str_len(const char *charptr);

int main(void)
{
  printf("%d\n", str_len("str_len test"));
  printf("%d\n", str_len(""));
  printf("%d\n", str_len("Vincent"));
  
  return 0;
}

int str_len(const char *charptr)
{
  const char *last_address = charptr;
  
  while(*last_address)
  {
    ++last_address;
  }
  return last_address - charptr;
}