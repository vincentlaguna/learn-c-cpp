#include <stdio.h>
#include <stdlib.h>

void get_input(char **b);

// Create the array of pointers and output the results
int main(void)
{
  char *names[5]; // char **names // (For solution 1)
  int x;
  /* // Allocate space for the pointer array (Solution 1)
	names = (char **)malloc( sizeof(char *) * 5 );
	if( names==NULL )
	{
		fprintf(stderr,"Unable to allocate array\n");
		exit(1);
	} */
  // Read the names
  for(x = 0; x < 5; x++)
  {
    printf("Name #%d: %s\n", x++);
    get_input(names[x]); // get_input(names + x); // Solution 1
  }
  // Output the results
  for(x = 0; x < 5; x++)
  {
    printf("%s\n", names[x]); // printf("%s\n", *(names + x));
  }
  return(0);
}

void get_input(char **b)
{
  int x;
  // Allocate the buffer
  *b = (char *)malloc(sizeof(char) * 16);
  // Validate memory allocation
  if(*b == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    return(1);
  }
  // Read in the text
  fgets(*b, 16, stdin);
  // Remove the newline
  
}