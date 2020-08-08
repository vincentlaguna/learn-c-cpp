#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  struct human
  {
    char name[32];
    char profession[32];
    int age;
  } *toWrite;
  
  const char filename[] = "saved.dat";
  char *r1;
  char *r2;
  FILE *fp;
  // Allocate structure
  toWrite = (struct human *)malloc(sizeof(struct human) * 1);
  
  if(toWrite == NULL)
  {
    fprintf(stderr, "Unable to allocate structure memory!\n");
    exit(1);
  }
  // Fill the toWrite structure; prompt the user
  printf("Enter your name: ");
  r1 = fgets(toWrite->name, 32, stdin);
  // Check for input errors
  if(r1 == NULL)
  {
    fprintf(stderr, "Input Error.\n");
    exit(1);
  }
  printf("What is your profession? ");
  r2 = fgets(toWrite->profession, 64, stdin);
  
  if(r2 == NULL)
  {
    fprintf(stderr, "Input Error\n");
    exit(1);
  }
  printf("How are old are you? ");
  scanf("%d", &toWrite->age);
  // Write the structure to a file
  fp = fopen(filename, "w");
  
  if(fp == NULL)
  {
    fprintf(stderr, "Unable to create file.\n");
    exit(1);
  }
  // Write the structure
  fwrite(toWrite, sizeof(struct human), 1, fp);
  // Close the file
  fclose(fp);
  printf("Data written to %s\n", filename);
  
  return(0);
}