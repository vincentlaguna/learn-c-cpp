#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

enum {FALSE, TRUE};

struct family
{
  char name[SIZE];
  Char relationship[SIZE];
  int age;
  struct family *next;
};
char filename[] = "family.dat";
// Read standard input, discard newline
char *input(void)
{
  static char buffer[SIZE];
  char *r;
  int x;
  // Initialize the buffer
  buffer[0] = '\0';
  // Gather input
  r = fgets(buffer, SIZE, stdin);
  // Validate input
  if(r == NULL)
  {
    fprintf(stderr, "Input Error.\n");
    exit(1);
  }
  // Remove the newline
  for(x = 0; x < SIZE; x++)
  {
    if(buffer[x] == '\n')
    {
      buffer[x] = '\0';
      break;
    }
  }
  return(buffer);
}
// Allocate new structure
struct family *allocate(void)
{
  struct family *p;
  p = (struct family *)malloc(sizeof(struct family) * 1);
  // Validate memory allocation
  if(p == NULL)
  {
    fprintf(stderr, "Unable to allocate memory.\n");
    exit(1);
  }
  return(p);
}
// Fill the structure
void fill(struct family *s)
{
  char temp[SIZE];
  
  printf("Name: ");
  strcpy(s->name, input());
  printf("Relationship: ");
  strcpy(s->relationship, input());
  printf("Age: ");
  strcpy(temp, input());
  s->age = strtod(temp, NULL);
  putchar('\n');
}
int main(void)
{
  struct family *first, *current;
  int done;
  char command[SIZE];
  // Initialize first record to NULL
  first = NULL;
  // Main menu and input loop
  done = FALSE;
  puts("Family Database");
  
  while(!done)
  {
    // Initialize the current pointer to the start of the list
    current = first;
    // Output menu
    puts("Menu: ");
    puts("A - Add record");
    puts("D - Delete record");
    puts("L - List all records");
    puts("O - Open");
    puts("S - Save");
    puts("Q - Quit");
    printf("Choice: ");
    strcpy(command, input()); // Read input
    // Process selection
    switch(command[0])
    {
      // Add a record
      case 'A':
      case 's':
        break;
      // Delete a record
      case 'D':
      case 'd':
        break;
      // List all records
      case 'L':
      case 'l':
        break;
      // Open/Retrieve existing records
      case 'O':
      case 'o':
        break;
      // Save all records
      case 'S':
      case 's':
        break;
      // Quit the program
      case 'Q':
      case 'q':
        done = TRUE;
        puts("Bye!");
        break;
      // Something weird typed
      default:
        puts("Unrecongnized command");
    }
  }
  return(0);
}