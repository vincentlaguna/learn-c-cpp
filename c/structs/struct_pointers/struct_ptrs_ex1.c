#include <stdio.h>
#include <stdlib.h>

struct item
{
  char *itemName;
  int qty;
  float price;
  float amount;
};

void readItem(struct item *i);
void printItem(struct item *i);

int main(void)
{
  struct item itm;
  struct item *pItem;
  pItem = &itm;
  // (*pItem).amount =  // use -> instead
  pItem->itemName = (char*) malloc(30 * sizeof(char)); // Memory allocation for variable pointed to
  if(pItem == NULL)
    exit(-1);
  readItem(pItem);
  printItem(pItem);
  
  free(pItem->itemName);
  return 0;
}

void readItem(struct item *i)
{
  printf("Enter a product name -> ");
  scanf("%s", i->itemName);
  
  printf("Enter quantity -> \n");
  scanf("%d", &i->qty);
  
  printf("Enter price -> \n");
  scanf("%f", &i->price);
  
  i->amount = (float)i->qty * i->price;
}

void printItem(struct item *i)
{
  printf("Name: [%s]\n", i->itemName);
  printf("Price: [%f]\n", i->price);
  printf("Quantity: [%d]\n", i->qty);
  printf("Total amount: [%.2f]\n", i->amount);
}