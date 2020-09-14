#include <stdio.h>
#include <stdlib.h>

struct QNode
{
  int key;
  struct QNode *pNext;
};

struct Queue
{
  struct QNode *pFront, *pRear;
};

struct QNode* newNode(int k);

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