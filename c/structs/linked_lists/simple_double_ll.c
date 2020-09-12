#include <stdio.h>
#include <stdlib.h>
// Self-referential structure
typedef struct node
{
  char data;
  struct node *pNext;
} node_t;
// Initialize struct pointer
typedef node_t *pListNode;
// Prototypes
void insert(pListNode *head, char value);
void insertAtStart(pListNode *head, char value);
void insertAtEnd(pListNode *head, char value);
char delete(pListNode *head, char value);
void deleteAtStart(pListNode *head)
int isEmtpy(pListNode head);
void printList(pListNode pCurrent);
// Main functions
int main(void)
{
  puts("This is a linked list project - TEST");
  pListNode head = NULL; // Because initially there no nodes
  int choice = 0; // User's choice
  char item = '\0'; // Item entered by the user
  // Display the menu
  printf("Please enter your choice:\n"
         "1. To insert an item into the list in alphabetical order.\n"
         "2. To insert an element at the end of the list.\n"
         "3. To insert an item at the beginning of the list.\n"
         "4. To delete an item from the list.\n"
         "5. To delete an item from the beginning of the list.\n"
         "6. To END.\n");
  printf(":: ");
  scanf("%d", &choice);
  
  
  return(0);
}