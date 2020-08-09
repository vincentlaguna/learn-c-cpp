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
// Fill the structure
void fill(struct item *s, int i)
{
  char *fruit[] = {"apples", "bananas", "grapes", "strawberries", "watermelon"};
  float prices[] = {1.20, 2.58, 2.09, 2.40, 0.51};
  
  s->id = i;
  strcpy(s->name, fruit[i]);
  s->price = prices[i];
}
// Output the list
void output(struct item *s)
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

int main(void)
{
  struct item *first, *current;
  int x;
  FILE *fp;
  
  for(x = 0; x < 5; x++)
  {
    if(x == 0)
    {
      first = allocate();
      current = first;
    }
    else
    {
      current->next = allocate();
      current = current->next;
    }
    fill(current, x);
  }
  current->next = NULL;
  output(first);
  // Save the data
  printf("Saving the data...");
  fp = fopen("lldata.dat", "w");
  // Verify file creation
  if(fp == NULL)
  {
    fprintf(stderr, "Error creating file.\n");
    exit(1);
  }
  // Second write the 5 structures
  while(current != NULL)
  {
    fwrite(first, sizeof(struct item), 1, fp);
    current = current->next;  
  }
  // Close the file
  fclose(fp);
  puts("Successfully saved!\n");
  
  return(0);
}