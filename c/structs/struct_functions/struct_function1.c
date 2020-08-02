#include <stdio.h>
#include <string.h>

struct person
{
  char name[32];
  int age;
  float iq;
};

struct person author;

void showStruct(struct person p);

int main(void)
{
  strcpy(author.name, "Dan Gookin");
  author.age = 54;
  author.i1 = 287.5;
  showStruct(author);
  
  return(0);
}

void showStruct(struct person p)
{
  
}