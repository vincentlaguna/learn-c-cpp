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
struct node* createNode(int value);
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
// Returns node pointer (saves on malloc() duplication)
struct node* createNode(int value)
{
  pNewNode = (struct node *) malloc(sizeof(struct node));
  // Validate memory allocation
  if(pNewNode == NULL)
  {
    fprintf(stderr, "\n Failed to allocate memory.\n");
    exit(EXIT_FAILURE);
  }
  else
  {
    pNewNode->value = value;
    pNewNode->pNext = NULL;
    return pNewNode;
  }
}

void insertNodeAtBeginning(void)
{
  int value = 0;
  
  printf("Enter the value of the new node: ");
  scanf("%d", &value);
  pNewNode = createNode(value);
  if(pHead == pTail && pHead == NULL)
  {
    pHead = pTail = pNewNode;
    pHead->pNext = NULL;
    pTail->pNext = NULL;
  }
  else
  {
    pTemp = pHead;
    pHead = pNewNode;
    pHead->pNext = pTemp;
  }
}

void insertNodeAtEnd(void)
{
  int value = 0;
  
  printf("Enter the value for the new node: ");
  scanf("%d", &value);
  pNewNode = createNode(value);
  
  if(pHead == pTail && pTail == NULL)
  {
    pHead = pTail = pNewNode;
    pHead->pNext = NULL;
    pTail->pNext = NULL;
  }
  else
  {
    pTail->pNext = pNewNode;
    pTail = pNewNode;
    pTail->pNext = NULL;
  }
  printf("\n-----------------INSERTED-----------------\n");
}

void insertNodeAtPosition(void)
{
  int position, value, count = 0, i;
  
  printf("\nEnter the value for the node: ");
  scanf("%d", &value);
  pNewNode = createNode(value);
  printf("\nEnter the position: ");
  scanf("%d", &position);
  pCurrent = pHead;
  // While loop
  while(pCurrent != NULL)
  {
    pCurrent = pCurrent->pNext;
    count++;
  }
  if(position == 1)
  {
    if(pHead == pTail && pHead != NULL)
    {
      pHead = pTail = pNewNode;
      pHead->pNext = NULL;
      pTail->pNext = NULL;
    }
    else
    {
      pTemp = pHead;
      pHead = pNewNode;
      pHead->pNext = pTemp;
    }
    printf("\n-----------------INSERTED-----------------\n");
  }
  else if(position > 1 && position <= count)
  {
    pCurrent = pHead;
    // For-loop
    for(i = 1; i < position; i++)
    {
      pPrevious = pCurrent;
      pCurrent = pCurrent->pNext;
    }
    pPrevious->pNext = pNewNode;
    pNewNode->pNext = pCurrent;
    printf("\n-----------------INSERTED-----------------\n");
  }
  else
  {
    printf("The position is out of range.\n");
  }
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