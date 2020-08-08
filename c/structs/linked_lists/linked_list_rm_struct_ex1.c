#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
// Define structure externally
struct item
{
  int id;
  char name[SIZE];
  float price;
  struct item *next;
};
// Allocate new structure
struct item *allocate(void)
{
  struct item *p;
  p = (struct item *)malloc(sizeof(struct item) * 1);
  // Verify memory allocation
  if(p == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  
}