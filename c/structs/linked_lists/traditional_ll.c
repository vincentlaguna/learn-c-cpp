/* Link: http://www.eprg.org/computerphile/tradlink.c 
a set of routines to illustrate insertion into, and deletion from, a linked
list using `traditional' single-level pointer techniques. The routines for 
deleting a list element, and for inserting at the front of a list are 
adapted from Kernighan and Pike's "The Practice of Programming"  pp.46 et 
seq. (Addison-Wesley 1999). The elements of the list are of type THING 
where each THING is a structure in which the `item' field holds a 
string and the `next' field holds a pointer to the next THING on the list. 

The techniques for adding a THING before the start of a list, or after the 
end of a list, are two special cases that are straightforward enough. 
However if the list elements are to be kept ordered alphabetically (say)  
the insertion of a new element needs great care to ensure that the 
NULL end-of-list marker does not get dereferenced.  

In summary the routines should be robust against:

 1) inserting/deleting to/from an empty list
 2) inserting/deleting to/from a single-element list
 3) inserting/deleting at the end of a list
 4) inserting/deleting at the front of a list - with updating of the 
    pointer to the  list head
 
The general routine `addmiddle', supplied below, is general purpose but 
it calls on 'addfront' and 'addend' in specific special cases. Note 
carefully that it does allow for duplicate list elements. 
Exercise: modify `addmiddle so that this duplication is NOT allowed.
(Link from Professor Brailsford's video) THIS IS A MODIFIED VERSION*
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

typedef struct _node
{
  char *item;
  struct _node *pNext;
} NODE;

NODE *pStart = NULL;
// Function Prototypes
NODE *pNewElement(char *text);
NODE *delElement(NODE *pHead, char *text);
NODE *addStart(NODE *pHead, NODE *pNew);
NODE *addEnd(NODE *pHead, *pNew);

// Create a new list element of type NODE from the supplied text string
NODE *pNewElement(char *text)
{
  NODE *pNew;
  pNew = (NODE *) malloc(sizeof(NODE));
  pNew->item = (char *) malloc(strlen(text) + 1);
  strcpy(pNew->item, text);
  pNew->pNext = NULL;
  return pNew;
}
// delElement: remove from list the first instance of an element containing
// a given text string. *Note!! delete requests for elements not in the list
// are silently ignored
NODE *delElement(NODE *pHead, char *text)
{
  NODE *pCurrent, *pPrevious;
  pPrevious = NULL;
  for(pCurrent = pHead; pCurrent != NULL; pCurrent = pCurrent->pNext)
  {
    if(strcmp(text, pCurrent->item) == 0)
    {
      if(pPrevious == NULL)
      {
        pHead = pPrevious->pNext;
      }
      else
      {
        pPrevious->pNext = pCurrent->pNext;
      }
      free(pCurrent->item); // Free off the string field
      free(pCurrent); // Remove rest of NODE
      return pHead;
    }
    pPrevious = pCurrent;
  }
}
// addStart: add new NODE at the start of the list
// Example usage: pStart = (addStart(pStart, pNewElement("burgers")));
NODE *addStart(NODE *pHead, NODE *pNew)
{
  pNew->pNext = pHead;
  return pNew;
}
// addEnd: add new NODE to the end of a list
// Usage example: pStart = (addEnd(pStart, pNewElement("wine")));
NODE *addEnd(NODE *pHead, *pNew)
{
  NODE *p2;
  
  if(pHead == NULL)
  {
    return pNew;
  }
  // Now find the end of the list
  for(p2 = pHead; p2->pNext != NULL; p2 = p2->pNext)
    ;
  p2->pNext = pNew;
  return pHead;
}
// Add element into the middle of a list of NODES based on alphabetical order
// of the 'item' strings within the NODE structures
NODE *addMiddle(NODE *pHead, NODE *pNew)
{
  BOOL found = FALSE;
  NODE *p1, *p2;
  
  if(pHead == NULL) // *Special case
  {
    printf("Initial list was NULL.\n");
    pHead = addStart(pHead, pNew);
    return pHead;
  }
  // Main loop. use p2 to remember previous p1
  p2 = p1 = pHead;
  
  while(!found)
  {
    if(found = strcmp(p1->item, pNew->item) >= 1)
    {
      if(p1 == pHead)
      {
        printf("Adding at head.\n");
        p2->pNext = pNew;
        pNew->pNext = p1;
        return pHead;
      }
    }
    // Match not found before the end of the list, so insert at end
    if(p1->pNext == NULL)
    {
      pHead = addEnd(pHead, pNew);
      return(pHead);
    }
  }
}

int main(void)
{
  puts("Traditional linked list using single-level pointers - TEST");
  return(0);
}