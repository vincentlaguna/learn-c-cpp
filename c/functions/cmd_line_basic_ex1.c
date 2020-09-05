#include <stdio.h>

int main(int argc, char **argv)
{
  if(argc < 2)
    puts("No extra arguments found");
  else
  {
    for(int x = 0; x < argc; x++)
      printf("Argument %d is %s\n", x, *(argv + x));
  }
  return(0);
}