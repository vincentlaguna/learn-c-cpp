#ifndef STACK_H
#define STACK_H

#include <stdbool.h>

void  makeEmpty(void);
bool  isEmpty(void);
bool  isFull(void);
void  push(int i);
int   pop(void);

#endif // STACK_H