#include <stdio.h>
#include <stdlib.h>

typedef struct listItem
{
  int data;
  struct listItem *pNext;
  struct listItem *pPrevious;
} LISTITEM;

int main(void)
{
  puts("Simple example of a double-linked list >>>\n");
  
  LISTITEM *pTemp, head;
  
  head.pNext = (LISTITEM*)&head;
  head.pPrevious = (LISTITEM*)&head;
  head.data = -1;
  // Populate the list
  for (int i = 0; i < 3; i++)
  {
    pTemp = malloc(sizeof(LISTITEM));
    pTemp->data = i;
    pTemp->pNext = head.pNext;
    head.pNext = pTemp;
    pTemp->pPrevious = &head;
    pTemp->pNext->pPrevious = pTemp;
  }
  return(0);
}