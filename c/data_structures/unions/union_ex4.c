#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TITLE_LEN 40
#define AUTHOR_LEN 20
#define DESIGN_LEN 10
/* // Struct implementation
struct catalog_item
{
  int stock_number;
  double price;
  int item_type;
  char title[TITLE_LEN + 1];
  char author[AUTHOR_LEN + 1];
  int num_pages;
  char design[DESIGN_LEN + 1];
  int colors;
  int sizes;
};
*/ 

int main(void)
{
  // Union inside a structure implementation
  struct catalog_item
  {
    int stock_number;
    double price;
    int item_type;
    union
    {
      struct
      {
        char title[TITLE_LEN + 1];
        char author[AUTHOR_LEN + 1];
        int num_pages;
      } book; // Struct member of "item"
      struct
      {
        char design[DESIGN_LEN + 1];
      } mug; // Struct member of "item"
      struct
      {
        char design[DESIGN_LEN + 1];
        int colors;
        int sizes;
      } shirt; // Struct member of "item"
    } item; // The Union is named "item". It is a member of the catalog_item struct
  };
  
  struct catalog_item c1;
   
  strcpy(c1.item.mug.design, "Cats");
  
  puts("\nTEST -> Nested structure members inside a union that is a structure member\n");
  printf("%s\n\n", c1.item.mug.design);
  return(0);
}