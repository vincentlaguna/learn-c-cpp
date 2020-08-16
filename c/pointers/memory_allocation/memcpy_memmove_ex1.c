#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  struct person
  {
    char name[8];
    int age;
  } man = {"Vincent", 34};
  void *buffer;
  int *bufint;
  char *bufchar;
  // Output the structure
  printf("Name -> %s, Age -> %d\n", man.name, man.age);
  //unsigned char *buffer;
  int x;
  // Allocate the unsigned buffer
  buffer = (unsigned char *)malloc(sizeof(struct person));
  // Validate memory allocation for buffer
  if(buffer == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  // Copy memory
  memcpy(buffer, &man, sizeof(struct person));
  // Initialize the data pointers
  bufchar = (char *)buffer;
  bufint = (int *)(buffer + 8);
  // The string referenced by bufchar is a pointer, but the contents of bufint
  // are required, so it's prefixed with the asterisk* operator
  printf("%s is %d years old\n", bufchar, *bufint);
  // Dump the buffer
  puts("\nBuffer dump...\n");
  
  for(x = 0; x < (int)sizeof(struct person); x++)
  {
    printf(" %02p", (buffer + x));
  }
  putchar('\n');

  // First example of copying an array of integers
  int a[] = {100, 101, 102, 103};
  int b[4];
  
  //memcpy(b, a, sizeof(int) * 4);
  memmove(&a[1],a, sizeof(int) * 4);
  putchar('\n');
  for(x = 0; x < 4; x++)
  {
    printf("%d. -> %d = %d\n",x, a[x], b[x]);
  }
  //*/
  return(0);
}