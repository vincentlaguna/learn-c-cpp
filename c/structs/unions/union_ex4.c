#include <stdio.h>
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
  c1.item.book.title; 
  
  puts("\nNested structure members inside a union that is a structure member TEST\n");
  
  printf("%s\n", c1.item.book.title);
  return(0);
}