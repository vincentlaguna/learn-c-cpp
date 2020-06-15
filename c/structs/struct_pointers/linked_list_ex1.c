#include <stdio.h>
#include <stdlib.h>

struct node
{
  char name[20];
  struct node *next;
};

int main(void)
{
  struct node *head = NULL;
  struct node *temp = NULL;
  struct node *temp1 = NULL;
  int choice;
  
  do
  {
    printf("1. Create Node in Linked List \n");
    printf("2. Display Nodes in Linked List \n");
    printf("3. Exit\n");
    printf("Enter your choice -> ");
    scanf("%d", &choice);
    
    switch(choice)
    {
      case 1:
        temp = (struct node*)malloc(sizeof(struct node));
        temp -> next = NULL;
        fflush(stdin);
        printf("Enter the name -> \n");
        gets(temp -> name);
        fflush(stdin);
        if(!head)
        {
          head = temp;
          temp1 = temp;
        }
        else
        {
          temp1 -> next = temp;
          temp1 = temp;
        }
        break;
      
      case 2:
        temp = head;
        while(temp)
        {
          printf("Data -> %s", temp -> name);
          temp = temp -> next;
        }
        break;
      default:
      break;
    }
  }
  while(choice != 3);
  return 0;
}