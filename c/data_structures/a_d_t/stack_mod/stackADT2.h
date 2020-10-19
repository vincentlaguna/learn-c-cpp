#ifndef STACKADT2_H
#define STACKADT2_H
#include <stdbool.h>

typedef int Item;

typedef struct stackType *Stack;

Stack create(int size);
void  destroy(Stack s);
void  makeEmpty(Stack s);
bool  isEmpty(Stack s);
bool  isFull(Stack s);
void  push(Stack s, Item i);
Item  pop(Stack s);

#endif // STACKADT2_H