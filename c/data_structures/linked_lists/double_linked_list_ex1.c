#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
// Define the structure externally
struct item
{
  int id;
  char name[SIZE];
  float price;
  struct item *next;
  struct item *previous;
};
// Allocate a new structure
struct item *allocate(void)
{
  struct item *p;
  p = (struct item *)malloc(sizeof(struct item) * 1);
  // Validate memory allocation
  if(p == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  return(p);
}
// Fill the new structure
void fill(struct item *s, int i)
{
  char *fruit[] = {"apples", "bananas", "grapes", "strawberries", "watermelon"};
  float prices[] = {1.20, 2.58, 2.09, 2.40, 0.51};
  
  s->id = i;
  strcpy(s->name, fruit[i]);
  s->price = prices[i];
}
// Output the list forward
void output_forward(struct item *s)
{
  while(s != NULL)
  {
    printf("%d: %s for $%.2f/pound\n",
            s->id + 1,
            s->name,
            s->price);
    s = s->next;
  }
}
// Output the list backward
void output_backward(struct item *s)
{
  while(s != NULL)
  {
    printf("%d: %s for $%.2f/pound\n",
            s->id + 1,
            s->name,
            s->price);
    s = s->previous;
  }
}


int main(void)
{
  struct item *first, *last, *current, *temp;
  int x;
  // Build a linked list with 5 items
  for(x = 0; x < 5; x++)
  {
    // Allocate initial structure
    if(x == 0)
    {
      first = allocate();
      current = first;
      fill(current, x);
      current->previous = NULL;
    }
    else
    {
      // Set the next structure link
      current->next = allocate();
      // Save the current structure
      temp = current;
      // Make the next structure the current structure
      current = current->next;
      fill(current, x);
      current->previous = temp;
    }
  }
  // Cap the final structure
  current->next = NULL;
  // Set the last pointer
  last = current;
  // Output the list forward
  puts("Forward List -> ");
  output_forward(first);
  //Output the list backward
  puts("Backward list -> ");
  output_backward(last);
  
  return(0);
}