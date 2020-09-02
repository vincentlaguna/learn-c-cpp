#include <stdio.h>
#include <stdlib.h>
// Node struct
struct node
{
  int value; // Data stored in the node
  struct node *next; //Pointer to the next node
};
struct node *new_node;
// Function declarations
struct node *add_to_list(struct node *list, int n);
struct node *read_numbers(void);
struct node *search_list(struct node *list, int n);
struct node *delete_from_list(struct node *list, int n);
void display_list(void);
// Main Function
int main(void)
{
  struct node *first = NULL;
  first = add_to_list(first, 100);
  first = add_to_list(first, 200);

  puts("Simple linked-list example TEST");
  read_numbers();
  search_list(first, 100);
  
  return(0);
}

struct node *add_to_list(struct node *list, int n)
{
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
  {
    printf("ERROR: malloc failed in FUNCTION -> add_to_list()\n");
    exit(EXIT_FAILURE);
  }
  new_node->value = n;
  new_node->next = list;
  return new_node;
}

struct node *read_numbers(void)
{
  struct node *first = NULL;
  int n;
  printf("Please enter a series of integers (0 to terminate): ");
  
  for(;;)
  {
    scanf("%d", &n);
  
    if(n == 0)
      return first;
    first = add_to_list(first, n);
  }
}

struct node *search_list(struct node *list, int n)
{
  struct node *p;
  /*
  for(p = list; p != NULL; p = p->next)
    if(p->value == n)
      return p;
  return NULL;
  */
  // Using a while loop for better readability
  while(list != NULL && list->value != n)
    list = list->next;
  return list;
}

struct node *delete_from_list(struct node *list, int n)
{
  struct node *current, *previous;
  
  for(current = list, previous = NULL; 
      current != NULL && current->value != n;
      previous = current, current->next)
      ;
  if(current == NULL) // n was not found
    return list;
  if(previous == NULL)
    list = list->next; // n is in the first node
  else
    previous->next = current->next; // n is in some other node
  free(current);
  return list;
}

void display_list(void)
{
  struct node *p;
}

/* // Was inserted at line 16
  struct node
  {
    int value; // Data stored in the node
    struct node *next; //Pointer to the next node
  };
  struct node *first = NULL; // To later point to the first node in the list
  struct node *new_node; // Variable that points to the node temporarily, until inserted 
  new_node = malloc(sizeof(struct node)); // Allocation of memory for new node
  new_node->value = 10;
  new_node->next = first;
  first = new_node;
  // Repeat for next node with different value
  new_node = malloc(sizeof(struct node)); // Allocation of memory for new node
  new_node->value = 20;
  new_node->next = first;
  first = new_node;
  */