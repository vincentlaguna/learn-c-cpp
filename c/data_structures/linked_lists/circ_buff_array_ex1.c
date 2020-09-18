#include <stdio.h>

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
    
    case(choice)
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
        prtinf("Wrong choice!\n");
    } // End of switch
  }
  
  
  return(0);
}

void enQueue()
{
  
}

void deQueue()
{
  
}

void display()
{
  
}