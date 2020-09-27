#include <stdio.h>

#define LENGTH 3

int data[LENGTH];    // Some integers
char *words[LENGTH]; // Some strings
// Main Function
int main(int argc, char **argv)
{
  void *pGeneric; // A generic pointer
  puts("\nA generic pointer example >>>\n");
  // Initialize our integer array
  for(int i = 0; i < LENGTH; i++)
  {
    data[i] = i;
  }
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", data[i]);
  }
  // Initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";
  printf("\n");
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%s\n", words[i]);
  }
  printf("\n");
  return(0);
}