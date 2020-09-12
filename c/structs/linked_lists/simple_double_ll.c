#include <stdio.h>
#include <stdlib.h>
// Self-referential structure
typedef struct node
{
  char data;
  struct node *pNext;
} node_t;

typedef node_t *pListNode;
// Prototypes
void insert(pListNode *head, char value);
void insertAtStart(pListNode *head, char value);
void insertAtEnd(pListNode *head, char value);
char delete(pListNode *head, char value);
void deleteAtStart(pListNode *head)
int isEmtpy(pListNode head);
void printList(pListNode pCurrent);

int main(void)
{
  puts("This is a linked list project - TEST");
  
  return(0);
}