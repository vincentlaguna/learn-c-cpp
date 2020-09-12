// Maintains a parts database (linked-list version)
#include <stdio.h>
#include <stdlib.h> // Linked-list version
#include "readline.h"
#define NAME_LEN 25 
//#define MAX_PARTS 100 // Array version
struct part
{
  int number;
  char name[NAME_LEN + 1];
  int on_hand;
  struct part *next;
}; // inventory[MAX_PARTS]; // Array version
struct part *inventory = NULL; // Points to first part
// Number of parts currently stored
//int num_parts = 0; // Array version
//int find_part(int number); // Array version
struct part *find_part(int number); // Linked-list version
void insert(void);
void search(void);
void update(void);
void print(void);
int compare_parts(const void *p, const void *q);

/****************************************************************************
 * main: Prompts the user to enter an operation code, then calls a function *
 *       to perform the requested action. Repeats until the user enters the *
 *       the command 'q'. Prints an error message if the user enters an     *
 *       illegal code.                                                      *
 * **************************************************************************/
 
int main(void)
{
  char code;
  int num_parts = 0;
  
  for(;;)
  {
    printf("Enter operation code (i, s, u, p, q): ");
    scanf("%c", &code);
    // Skips to the end of line
    while(getchar() != '\n')
      ;
    switch(code)
    {
      case 'i':
        insert();
        break;
      case 's':
        search();
        break;
      case 'u':
        update();
        break;
      case 'p':
        print();
        qsort(inventory, num_parts, sizeof(struct part), compare_parts);
        break;
      case 'q':
        return(0);
      default:
        printf("Illegal code\n");
    }
    printf("\n");
  }
}

/*************************************************************************
 * find_part: Looks up a part number in the inventory array.             *  
 *            Returns the array index if the part number is found,       *
 *            otherwise, returns -1 (Array Version)                      *
 * ***********************************************************************/
/*
int find_part(int number)
{
  int i;
  // Loop through the inventory
  for(i = 0; i < num_parts; i++)
  {
    if(inventory[i].number == number)
      return i;
  }
  return(-1);
}
*/
/*************************************************************************
 * find_part: Looks up a part number in the inventory list.              *  
 *            Returns a pointer to the node containing the part number;  *
 *            if the part number is not found, returns NULL.             *
 *            (Linked-list Version)                                      *
 * ***********************************************************************/
 
struct part *find_part(int number)
{
  struct part *p;
  
  for(p = inventory; p != NULL && number > p->number; p = p->next)
    ;
  if(p != NULL && number == p->number)
    return p;
  return NULL;
}

/*************************************************************
 * insert: Prompts the user for information about a new part *
 *         and then inserts the part into the database.      *
 *         Prints an error message and returns prematurely   *
 *         if the part already exists or the database is     *
 *         full. (Array Version)                             *
 *************************************************************/
/* 
void insert(void)
{
  int part_number;
  
  if(num_parts == MAX_PARTS)
  {
    printf("Database if full; can't add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d", &part_number);
  
  if(find_part(part_number) >= 0)
  {
    printf("Part already exists.\n");
    return;
  }
  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}
*/
/*************************************************************
 * insert: Prompts the user for information about a new part *
 *         and then inserts the part into the inventory      *
 *         list; the list remains sorted by part number.     * 
 *         Prints an error message and returns prematurely   *
 *         if the part already exists or space could not be  *
 *         allocated for the part. (Linked-List Version)     *
 *************************************************************/
 
void insert(void)
{
  struct part *current, *previous, *new_node;
  
  new_node = (struct part *) malloc(sizeof(struct part));
  
  if(new_node == NULL)
  {
    fprintf(stderr, "Database is full; cannot add any more parts\n");
    exit(1);
  }
  printf("Enter part number: ");
  scanf("%d", &new_node->number);
   
  for(current = inventory, previous = NULL;
      current != NULL && new_node->number > current->number;
      previous = current, current = current->next)
    ;
  if(current != NULL && new_node->number == current->number)
  {
    printf("Part already exists.\n");
    free(new_node);
    return;
  }
  printf("Enter part name: ");
  read_line(new_node->name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &new_node->on_hand);
  new_node->next = current;
  
  if(previous == NULL)
    inventory = new_node;
  else
    previous->next = new_node;
}

/*************************************************************
 * search: Prompts the user to enter a part number, then     *
 *         looks up the part in the database. If the part    *
 *         exists, prints the name and quantity on hand; if  *
 *         not, prints an error message. (Array Version)     *
 *************************************************************/
/*
void search(void)
{
  int i;
  int number;
  
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  
  if(i >= 0)
  {
    printf("Part name -> %s\n", inventory[i].name);
    printf("Quantity on hand -> %d\n", inventory[i].on_hand);
  }
  else
  {
    printf("Part not found.\n");
  }
}
*/
/*************************************************************
 * search: Prompts the user to enter a part number, then     *
 *         looks up the part in the database. If the part    *
 *         exists, prints the name and quantity on hand; if  *
 *         not, prints an error message.                     *
 *         (Linked-List Version)                             *
 *************************************************************/

void search(void)
{
  struct part *p;
  int number;
  
  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);
  
  if(p != NULL)
  {
    printf("Part name: %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
  }
  else
    printf("Part not found.\n");
}
 
/*************************************************************
 * update: Prompts the user to enter a part number, prints   *
 *         an error message if part doesn't exists;          *
 *         otherwise, prompts the user to enter change in    *
 *         quantity on hand, updates the database.           *
 *         (Array Version)                                   *
 *************************************************************/
/*
void update(void)
{
  int i;
  int number;
  int change;
  
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);
  
  if(i >= 0)
  {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  }
  else
  {
    printf("Part not found.\n");
  }
}
*/
/*************************************************************
 * update: Prompts the user to enter a part number, prints   *
 *         an error message if part doesn't exists;          *
 *         otherwise, prompts the user to enter change in    *
 *         quantity on hand, updates the database.           *
 *         (Linked-List Version)                             *
 *************************************************************/
 
void update(void)
{
  struct part *p;
  int number, change;
  
  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);
  
  if(p != NULL)
  {
    printf("Enter change in quantity: ");
    scanf("%d", &change);
    p->on_hand += change;
  }
  else
    printf("Part not found.\n");
}
 
/*************************************************************
 * print: Prints a listing of all the parts in the database, *
 *        showing the part number, part name, and quantity   *
 *        on hand. Parts are printed in the order in which   *
 *        they were entered into the database.               *
 *        (Array Version)                                    *
 *************************************************************/
/*
void print(void)
{
  int i;
  printf(" Part Number Part Name            "
         "Quantity on Hand\n");
  
  for(i = 0; i < num_parts; i++)
  {
    printf("%7d       %-25s%lld\n", inventory[i].number,
           inventory[i].name, inventory[i].on_hand);
  }
}
*/
/*************************************************************
 * print: Prints a listing of all the parts in the database, *
 *        showing the part number, part name, and quantity   *
 *        on hand. Parts numbers will appear in ascending    *
 *        order. (Linked-List Version)                       *
 *************************************************************/
 
void print(void)
{
  struct part *p;
   
  printf(" Part Number Part Name            "
         "Quantity on Hand\n");
  for(p = inventory; p != NULL; p = p->next)
  {
    printf("%7d       %-25s%lld\n", p->number, p->name, p->on_hand);
  }
}

int compare_parts(const void *p, const void *q)
{
  return ((struct part *)p)->number - ((struct part *)q)->number;
}