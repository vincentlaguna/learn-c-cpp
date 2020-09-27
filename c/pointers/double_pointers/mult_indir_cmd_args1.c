#include <stdio.h>
// Main Function - This program displays any arguments passed to it
int main(int argc, char **argv)
{
  puts("\nExample of multiple indirection using command-line arguments >>>\n\n");
  int i;
  //1. Iterate over array of args
  for(i = 0; i < argc; i++)
  {
    printf("arg %d is %s\n", i, argv[i]); // Prints argument at index i
  }
  printf("\n\n");
  // 2. Dereference each string argument (*argv) via pointer to the pointer
  // to the start of the array of args (**argv)
  for(i = 0; i < argc; i++)
  {
    printf("arg %d is %s\n", i, *argv);
    argv += 1;
  }
  printf("\n");
  return(0);
}