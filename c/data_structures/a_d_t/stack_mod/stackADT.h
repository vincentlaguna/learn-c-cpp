#ifndef STACKADT_H
#define STACKADT_H
#include <stdbool.h>

typedef struct stackType *Stack;

Stack create(void);
void  destroy(Stack s);
void  makeEmpty(Stack s);
bool  isEmpty(Stack s);
bool  isFull(Stack s);
void  push(Stack s, int i);
int   pop(Stack s);

#endif // STACKADT_H