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

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

/****************************************************************************
 * main: Prompts the user to enter an operation code, then calls a function *
 *       to perform the requested action. Repeats until the user enters the *
 *       the command 'q'. Prints an error message if the user enters an     *
 *       illegal code.                                                      *
 * **************************************************************************/
 
int main(void)
{
  char code;
  for(;;)
  {
    printf("Enter operation code: ");
    scanf("%c", &code);
    // Skips to the end of line
    while(getchar() != '\n')
      ;
    switch(code)
    {
      case 'i':
        inser();
        break;
      case 's':
        search();
        break;
      case 'u':
        update();
        break;
      case 'p':
        print();
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
 *            otherwise, returns -1                                      *
 * ***********************************************************************/

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

/*************************************************************
 * insert: Prompts the user for information about a new part *
 *         and then inserts the part into the database.      *
 *         Prints an error message and returns prematurely   *
 *         if the part already exists or the database is     *
 *         full.                                             *
 *************************************************************/
 
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
}