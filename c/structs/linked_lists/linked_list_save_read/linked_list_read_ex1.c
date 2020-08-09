#include <stdio.h>
#include <stdlib.h>

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
  
}

int main(void)
{
  puts("TEST");
  return(0);
}