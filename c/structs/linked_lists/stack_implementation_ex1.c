#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *pLink;
};

struct Node *pTop;
// Function Prototypes
int push(int data);
int isEmpty();
void pop();
void display();
// Main Function
int main(void)
{
  puts("Example of a stack implementation using a linked-list - TEST");
  
  
  return(0);
}

int push(int data)
{
  struct Node *pTemp = malloc(sizeof(struct Node));
  
  if(pTemp != NULL)
  {
    pTemp->data = data;
    pTemp->pLink = pTop;
    pTop = pTemp;
  }
}

int isEmpty()
{
  return pTop == NULL;
}

void pop()
{
  struct Node *pTemp;
  
  if(pTop != NULL)
  {
    pTemp = pTop;
    pTop = pTop->pLink;
    pTemp->pLink = NULL;
    free(pTemp);
  }
}

void display()
{
  struct Node *pTemp;
  
  if(pTop != NULL)
  {
    pTemp = pTop;
    
    while(pTemp != NULL)
    {
      printf("%d:\n", pTemp->data);
      pTemp = pTemp->pLink;
    }
  }
}