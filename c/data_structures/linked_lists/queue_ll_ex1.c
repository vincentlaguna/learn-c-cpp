#include <stdio.h>
#include <stdlib.h>
// Structures
struct QNode
{
  int key;
  struct QNode *pNext;
};

struct Queue
{
  struct QNode *pFront, *pRear;
};
// Function Prototypes
struct QNode* newNode(int k);
struct Queue* createQueue(void);
void enQueue(struct Queue *pQ, int k);
// Main Function
int main(void)
{
  puts("Queue implementation using a linked-list\n");
  
  
  return(0);
}

struct QNode* newNode(int k)
{
  struct QNode *pTemp = (struct QNode *) malloc(sizeof(struct QNode));
  
  pTemp->key = k;
  pTemp->pNext = NULL;
  return pTemp;
}

struct Queue* createQueue(void)
{
  struct Queue *pQ = (struct Queue *) malloc(sizeof(struct Queue));
  
  pQ->pFront = pQ->pRear = NULL;
  return pQ;
}

void enQueue(struct Queue *pQ, int k)
{
  
}