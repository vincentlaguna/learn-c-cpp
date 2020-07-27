#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp = NULL;
  char ch = '\0';
  int wrd = 1;
  int charctr = 1;
  
  if(argc == 1) // Check if the first argument passes a file
    fp = stdin;
  else if(argv == 2) // If we have 2 arguments, we will open up our file
  {
    if((fp = fopen(argv[1], "r")) == NULL) // Correctly handle NULL file
    {
      fprintf(stderr, "Cannot open %s!\n", argv[1]);
      exit(EXIT_FAILURE);
    }
  }
  else
  {
    fprintf(stderr, "Usage: %s [filename]\n", argv[0]);
    exit(EXIT_FAILURE);
  }
  
  return 0;
}