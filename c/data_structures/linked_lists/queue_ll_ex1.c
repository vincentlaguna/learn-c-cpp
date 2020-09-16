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
struct QNode* deQueue(struct Queue *pQ);
// Main Function
int main(void)
{
  struct Queue *pQ = createQueue();
  
  puts("Queue implementation using a linked-list\n");
  
  enQueue(pQ, 1);
  enQueue(pQ, 2);
  deQueue(pQ);
  deQueue(pQ);
  enQueue(pQ, 3);
  enQueue(pQ, 4);
  enQueue(pQ, 5);
  
  struct QNode *pN = deQueue(pQ);
  
  if(pN != NULL)
    printf("Dequeued item is %d", pN->key);
  
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
  struct QNode *pTemp = newNode(k);
  // If the queue is empty, then new node is front and rear both
  if(pQ->pRear == NULL)
  {
    pQ->pFront = pQ->pRear = pTemp;
    return;
  }
  // Add new node at the end of the queue and change rear
  pQ->pRear->pNext = pTemp;
  pQ->pRear = pTemp;
}

struct QNode* deQueue(struct Queue *pQ)
{
  // If queue is empty, return NULL
  if(pQ->pFront == NULL)
    return NULL;
  // Store previous front and move front one node ahead
  struct QNode *pTemp = pQ->pFront;
  pQ->pFront = pQ->pFront->pNext;
  // If front becomes NULL, then change the rear also to NULL
  if(pQ->pFront == NULL)
    pQ->pRear = NULL;
  return pTemp;
}