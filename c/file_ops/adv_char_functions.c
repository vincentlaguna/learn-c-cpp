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
  
  ch = getc(fp);
  
  while(ch != EOF) // Start reading characters until EOF
  {
    if(ch == ' ' || ch == '\n')
      wrd++;
    else
      charctr++;
    ch = getc(fp);  
  }
  
  printf("\nThe number of words in the file are -> %d\n", wrd - 1);
  printf("The number of characters in the file are -> %d\n\n", charctr - 1);
  
  fclose(fp);
  
  return 0;
}