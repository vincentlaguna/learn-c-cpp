#include <stdio.h>

void copyString(char *to, char *from);

int main(void)
{
  char string1[] = "A string to be copied";
  char string2[50];
  copyString(string2, string1);
  printf("Copied strings: %s -> %s\n", string1, string2);
  return 0;
}

/* No pointers
void copyString(char to[], char from[])
{
  for(int i = 0; i != '\0'; i++ )
  {
    to[i] = from[i];
  }
  to[i] = '\0';
}
*/

/* Pointers used
void copyString(*to, *from)
{
  for(; *to != '\0'; ++from, ++to) // Pre-decrement, keep it from going "out of bounds"
  {
    *to = *from;
  }
  *to = '\0'
}
*/

// Example optimized
void copyString(char *to, char *from)
{
  while(*from) // NULL character == 0, will jump out then
  {
    *to++ = *from++;
  }
  *to = '\0';
}