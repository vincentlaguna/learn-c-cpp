#include <stdio.h>
#include <stdlib.h>

#define MAX 50
// Function Prototypes
void enQueue();
void deQueue();
void display();
// Globals
int queue_array[MAX];
int rear = -1;
int front = -1;
// Main Function
int main(void)
{
  puts("Basic implementation of a circular buffer array queue - TEST\n");
  
  int choice;
  
  while(1)
  {
    printf("1. Insert an element in the queue.\n");
    printf("2. Delete an element in the queue.\n");
    printf("3. Display all the elements of the queue.\n");
    printf("4. EXIT.\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    
    switch(choice)
    {
      case 1:
        enQueue();
        break;
      case 2:
        deQueue();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(1);
      default:
        printf("Wrong choice!\n");
    } // End of switch
  } // End of while
} // End of Main

void enQueue()
{
  int add_item;
  
  if(rear == MAX - 1)
    printf("Queue overflow.\n");
  else
  {
    if(front == -1)
      front = 0;
  }
  printf("Inset the element in the queue: ");
  scanf("%d", &add_item);
  rear = rear + 1;
  queue_array[rear] = add_item;
}

void deQueue()
{
  if(front == -1 || front > rear)
  {
    printf("Queue underflow.\n");
    return;
  }
  else
  {
    printf("Element deleted from queue is -> %d\n", queue_array[front]);
    front = front + 1;
  }
}

void display()
{
  
}