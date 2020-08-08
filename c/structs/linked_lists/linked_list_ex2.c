#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16
// Define the structure externally to ensure that
// it is available to all functions
struct item
{
  int id;
  char name[SIZE];
  float price;
  struct item *next;
};
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
  // Check for valid input
  if(r == NULL)
  {
    fprintf(stderr, "Input Error.\n");
    exit(1);
  }
  // Remove the newline
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
  return(p);
}
// Fill the structure
void fill(struct item *s, int i)
{
  char temp[SIZE];
  
  s->id = i;
  printf("Record %d Fruit: ", i);
  strcpy(s->name, input());
  printf("Price: ");
  strcpy(temp, input());
  s->price = strtof(temp, NULL);
  // The 'next' member if filled in the main function
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
  struct item *first, *current;
  int x;
  // This linked list has (5) items
  for(x = 0; x < 5; x++)
  {
    // Allocate initial structure
    if(x == 0)
    {
      first = allocate();
      current = first;
    }
    else
    {
      // Set the next structure link
      current->next = allocate();
      // Make the next structure the current structure
      current = current->next;
    }
    fill(current, x + 1);
  }
  // Cap the final structure
  current->next = NULL;
  // Output the list
  output(first);
  
  return(0);
}