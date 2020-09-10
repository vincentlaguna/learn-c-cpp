#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  char data;
  struct node *next;
} node_t;

typedef node_t *pListNode;
// Prototypes
void insert();
void insertAtStart();
void insertAtEnd();
char delete();
int isEmtpy();
void printList();

int main(void)
{
  puts("This is a linked list project - TEST");
  
  return(0);
}