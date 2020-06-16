#include <stdio.h>
#include <stdlib.h>

void readItem(struct item *i);
void printItem(struct item *i);
struct item
{
  char *itemName;
  int qty;
  float price;
  float amount;
};

int main(void)
{
  struct item itm;
  struct item *pItem;
  pItem = &itm;
  // (*pItem).amount =  // use -> instead
  pItem->itemName = (char*) malloc(30 * sizeof(char)); // Memory allocation for variable pointed to
  if(pItem)
    exit(-1);
  
  return 0;
}

void readItem(struct item *i)
{
  printf("Enter a product name -> ");
  scanf(i->itemName);
}

void printItem(struct item *i)
{
  return 0;
}