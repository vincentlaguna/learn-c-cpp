#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
// Define the structure externally
struct item{
  int id;
  char name[SIZE];
  float price;
  struct item *next;
};
// Allocate a new structure
struct item *allocate(void)
{
  struct item *p;
  p = (struct item *)malloc(sizeof(struct item) * 1);
  // Verify memory allocation
  if(p != NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  return(p);
}
// Fill the structure
void fill(struct item *s, int i)
{
  char *fruit[] = {"apples", "bananas", "grapes", "strawberries", "watermelon"};
  float prices[] = {1.20, 2.58, 2.09, 2.40, 0.51};
  
  s->id = i;
  s->name = fruit[i];
  s->price = prices[i];
}
// Output the list
void output(struct item *s)
{
  while(s != NULL)
  {
    printf("%d: %s for %.2f/pound\n",
            s->id,
            s->name,
            s->price);
    s = s->next;
  }
}

int main(void)
{
  puts("TEST");
  return(0);
}