#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *pLink;
};

struct Node *pTop = NULL;
// Function Prototypes
int push(int data);
int isEmpty();
void pop();
void display();
// Main Function
int main(void)
{
  puts("Example of a stack implementation using a linked-list - TEST");
  puts("Pushing 4 elements unto the stack -> \n");
  
  push(1);
  push(2);
  push(3);
  push(4);
  
  display();
  
  puts("\nPopping 2 elements off the stack -> \n");
  
  pop();
  pop();
  
  display();
  putchar('\n');
  
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