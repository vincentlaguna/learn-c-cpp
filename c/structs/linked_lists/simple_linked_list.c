#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct node
  {
    int value; // Data stored in the node
    struct node *next; //Pointer to the next node
  };
  struct node *first = NULL;
  struct node *new_node;
  new_node = (struct node *)malloc(sizeof(struct node));
  
  
  puts("Simple linked-list example TEST");
  
  return(0);
}