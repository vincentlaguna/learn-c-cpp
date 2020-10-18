#ifndef STACK_H
#define STACK_H
#include <stdbool.h>

#define STACK_SIZE 100

typedef struct
{
    int contents[STACK_SIZE];
    int top;
    
} Stack;

void makeEmpty(Stack *pStack);
bool isEmpty(const Stack *pStack);
bool isFull(const Stack *pStack);
void push(Stack *pStack, int i);
int pop(Stack *pStack);

/* // Linked-List interface
void  makeEmpty(void);
bool  isEmpty(void);
bool  isFull(void);
void  push(int i);
int   pop(void);
*/

#endif // STACK_H