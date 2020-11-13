#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listItem
{
  int data;
  struct listItem *pNext;
} LISTITEM;

int main(void)
{
  LISTITEM *pHead, *pTemp;
  pHead = NULL;
  // Populate the list
  for (int i = 0; i < 20; i++)
  {
    pTemp = malloc(sizeof(LISTITEM));
    pTemp = pHead;
    pTemp->data = i;
    pTemp->pNext = pHead;
    pHead = pTemp;
  }
  // Displaay what we've got
  pTemp = pHead;
  while (pTemp != NULL)
  {
    printf("List Item: current item is -> %p; next is -> %p; data is -> %d\n",
           pTemp, pTemp->pNext, pTemp->data);
    pTemp = pTemp->pNext;
  }
  return(0);
}
