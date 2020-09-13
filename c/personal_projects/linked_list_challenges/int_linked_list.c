#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
// Self-referential structure
struct node
{
  int value;
  struct node *pNext;
};
// Function Prototypes
struct node* createNode(int); // Returns node pointer
void insertNodeAtBeginning(void);
void insertNodeAtEnd(void);
void insertNodeAtPosition(void);
void deletePosition(void);
void search(void);
void updateValue(void);
void display(void);
// Global Variables
struct node *pNewNode, *pCurrent, *pPrevious, *pTemp;
struct node *pHead = NULL, *pTail = NULL;
// Main Function
int main(void)
{
  puts("Integer linked-list TEST");
  int choice = '\0';
  // While loop
  while(true)
  {
    printf("\n----------------------------------------\n");
    printf("\nOperations on a linked list\n");
    printf("\n----------------------------------------\n");
    printf("\n1. Insert node at the beginning");
    printf("\n2. Insert node at the end");
    printf("\n3. Insert node at a specific position");
    printf("\n4. Delete node from any position");
    printf("\n5. Update node value");
    printf("\n6. Search element in the linked list");
    printf("\n7. Display list");
    printf("\n8. EXIT\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);
    // Switch case
    switch(choice)
    {
      case 1:
        insertNodeAtBeginning();
        break;
      case 2:
        insertNodeAtEnd();
        break;
      case 3:
        insertNodeAtPosition();
        break;
      case 4:
        deletePosition();
        break;
      case 5:
        updateValue();
        break;
      case 6:
        search();
        break;
      case 7:
        display();
        break;
      case 8:
        printf(" <<< Exiting >>> \n");
        return(0);
        break;
      default:
        printf("\n...Invalid choice...\n");
        break;
    }
  }
  return(0);
}

void insertNodeAtBeginning(void)
{
  
}

void insertNodeAtEnd(void)
{
  
}

void insertNodeAtPosition(void)
{
  
}

void deletePosition(void)
{
  
}

void search(void)
{
  
}

void updateValue(void)
{
  
}

void display(void)
{
  
}