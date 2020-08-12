// Maintains a parts database (array version)
#include <stdio.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

stuct part
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
} inventory[MAX_PARTS];
// Number of parts currently stored
int num_parts = 0;
