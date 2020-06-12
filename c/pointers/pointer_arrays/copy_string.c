#include <stdio.h>

int main(void)
{
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
// Pointers used
void copyString(*to, *from)
{
  for(; *to != '\0'; ++from, ++to)
  {
    *to = *from;
  }
  *to = '\0'
}