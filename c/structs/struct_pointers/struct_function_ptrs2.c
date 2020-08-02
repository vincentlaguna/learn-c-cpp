#include <stdio.h>
#include <stdlib.h>

struct person
{
  char name[32];
  int age;
};

struct person *allocateStructure(void);
void fillStructure(struct person *p);
void showStructure(struct person *p);

int main(void)
{
  
  struct person *you;
  you = allocateStructure();
  fillStructure(you);
  showStructure(you);
  
  return(0);
}

struct person *allocateStructure(void)
{
  struct person *p;
  
  p = (struct person *)malloc(sizeof(struct person));
  if(p == NULL)
  {
    perror("Unable to allocate structure");
    exit(1);
  }
  return(p);
  
}

void fillStructure(struct person *p)
{
  printf("Type your first name: ");
  scanf("%s", p->name); // !&p? = p is already a string array of characters
  printf("Enter your age: ");
  scanf("%d", &p->age);
}

void showStructure(struct person *p)
{
  printf("Your name is %s, and you are %d years old\n", p->name, p->age);
  //printf("%s has an IQ of %.1f\n", p->name, p->iq);
}