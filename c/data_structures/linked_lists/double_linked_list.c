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
  return(0);
}