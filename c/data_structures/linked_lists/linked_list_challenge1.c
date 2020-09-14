#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 16

enum {FALSE, TRUE};

struct family
{
  char name[SIZE];
  char relationship[SIZE];
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
// Output the list
int output(struct family *s)
{
  int count = 0;
  // Check for empty list
  if(s == NULL)
  {
    puts("List is empty");
  }
  //Output all records
  else
  {
    while(s != NULL)
    {
      printf("%d: %s, your %s, is %d years old.\n",
              count + 1,
              s->name,
              s->relationship,
              s->age);
      s = s->next;
      count++;
    }
  }
  putchar('\n');
  return(count);
}
// Save the linked list
void save(struct family *s)
{
  FILE *fp;
  int records;
  int x;
  // Confirm the list isn't empty
  if(s == NULL)
  {
    puts("List is empty.\n");
    return;
  }
  // Count the number of records
  records = output(s);
  printf("%d records to save...", records);
  // Open the file
  fp = fopen(filename, "w");
  // Validate file
  if(fp == NULL)
  {
    fprintf(stderr, "Unable to create %s\n\n", filename);
    return; // Don't quit on this error
  }
  // Save all the records
  for(x = 0; x < records; x++)
  {
    fwrite(s, sizeof(struct family), 1, fp);
    // Okay to change s here
    s = s->next;
  }
  printf("%d records written...", records);
  // Close the file
  fclose(fp);
  puts("Done!");
}
// Read the linked list from a file
void open(struct family *s)
{
  FILE *fp;
  int records;
  // Open the file
  fp = fopen(filename, "r");
  // Validate file
  if(fp == NULL)
  {
    fprintf(stderr, "Unable to read from %s", filename);
    return; // Also don't quit on this error
  }
  printf("Opening file %s...", filename);
  // Retrieve the records
  records = 1;
  // Allocate first structure
  while(1)
  {
    fread(s, sizeof(struct family), 1, fp);
    // NULL pointer is saved
    if(s->next == NULL)
      break;
    s->next = allocate();
    s = s->next;
    records++;
  }
  printf("%d records read...", records);
  // Close the file
  fclose(fp);
  puts("Done!\n");
}

int main(void)
{
  struct family *first, *current, *temp;
  int done, r, record;
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
        // Check to see if first record is initialized
        if(first == NULL)
        {
          current = allocate();
          first = current;
          fill(current);
        }
        else
        {
          while(current->next)
            current = current->next;
          current->next = allocate();
          current = current->next;
          fill(current);
        }
        current->next = NULL;
        break;
      // Delete a record
      case 'D':
      case 'd':
        if(first == NULL)
        {
          puts("Nothing to delete.\n");
          break;
        }
        else
        {
          // Output the list
          r = output(first);
          // Prompt
          printf("Remove record 1 to %d? ", r);
          record = strtod(input(), NULL);
          if(record < 1 || record > r)
          {
            puts("value out of range.\n");
            break;
          }
          printf("Removing record %d...", record);
          // Test for first record
          if(record == 1)
          {
            // Check to see if only record
              if(first->next == NULL)
              {
                free(first);
                first = NULL;
              }
              else
              {
                temp = first;
                first = first->next;
                free(temp);
              }
              puts("Done!\n");
              break;
            }
            // Record to delete isn't first record = Visit previous record
            while(record - 2)
            {
              current = current->next;
              record--;
            }
            // Save the next record
            temp = current->next;
            // Reset the current record pointer
            current->next = temp->next;
            // Free the removed structure
            free(temp);
            puts("Deleted.\n");
        }
        break;
      // List all records
      case 'L':
      case 'l':
        output(first);
        break;
      // Open/Retrieve existing records
      case 'O':
      case 'o':
        first = allocate();
        open(first);
        break;
      // Save all records
      case 'S':
      //case 's':
        save(first);
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