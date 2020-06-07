#include <stdio.h>
#include <stdlib.h>

union bookInfo
{
  int year;
  char name[10];
};

struct book
{
  char author[20];
  char publisher[20];
  union bookInfo info;
};

int main(void)
{
  struct book book1;
  printf("Enter name of author | publisher | year: ");
  scanf("%s %s %d", book1.author, book1.publisher, &book1.info.year);
  
  printf("The information entered is \n");
  printf("Author -> %s\n", book1.author);
  printf("Publisher -> %s\n", book1.publisher);
  printf("Year -> %d\n", book1.info.year);
  
  fflush(stdin);
  printf("Enter name of book -> ");
  scanf("%s", book1.info.name); // watch why this fails
  
  printf("Name of the book is -> %s\n", book1.info.name);
  printf("Year -> %d", book1.info.year);
  getchar();
  
  return 0;
}