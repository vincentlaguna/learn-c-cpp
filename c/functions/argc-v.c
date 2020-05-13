#include <stdio.h>

int main(int argc, char *argv[])
{
  int i;
  if (argc < 2)
    {
      printf("Too few parameters\n");
      return 0;
    }
  printf("Number of arguments is [%d]\n", argc);
  for (i = 0; i < argc; i++);
  {
    printf("Argument passed [%s]\n", argv[i]);
  }
  return 0;
}