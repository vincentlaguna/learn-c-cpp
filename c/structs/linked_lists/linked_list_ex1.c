#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
// Read standard input, discard newline
char *input(void)
{
  static char buffer[SIZE];
  char *r;
  int x;
  // Initialize the buffer
  buffer[0] = '\0';
  // Gather input
  r = fgets(buffer, SIZE, stdin);
  // Check for input
  if(r == NULL)
  {
    fprintf(stderr, "Input Error.\n");
    exit(1);
  }
  // Remove newline
  for(x = 0; x < SIZE; x++)
  {
    if(buffer[x] == '\n')
    {
      buffer[x] = '\0';
      break;
    }
  }
  return(buffer);
}

int main(void)
{
  return(0);
}

int main(void)
{
  struct item
  {
    int id;
    char name[SIZE];
    float price;
    struct item *next;
  };
  struct item *first, *current;
  char temp[SIZE];
  // Allocate initial structure
  first = (struct item *)malloc(sizeof(struct item) * 1);
  if(first == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
}