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
struct node* createNode(int);
void insertAtBeginning();
void insertAtEnd();
void insertNodeAtPosition();
void deletePosition();
void search();
void updateValue();
void display();
// Global Variables
struct node *pNewNode, *ptr, *pPrevious, *pTemp;
struct node *pHead = NULL, *pTail = NULL;
// Main Function
int main(void)
{
  puts("Integer linked-list TEST");
  return(0);
}