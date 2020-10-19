#ifndef STACKADT_H
#define STACKADT_H
#include <stdbool.h>

typedef int Item;

typedef struct stackType *Stack;

Stack create(void);
void  destroy(Stack s);
void  makeEmpty(Stack s);
bool  isEmpty(Stack s);
bool  isFull(Stack s);
void  push(Stack s, Item i);
Item   pop(Stack s);

#endif // STACKADT_H