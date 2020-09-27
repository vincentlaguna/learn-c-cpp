#include <stdio.h>

#define LENGTH 3

int data[LENGTH];    // Some integers
char *words[LENGTH]; // Some strings
// Main Function
int main(int argc, char **argv)
{
  void *pGeneric; // A generic pointer
  puts("\nA generic pointer example >>>\n");
  // Initialize our integer array
  for(int i = 0; i < LENGTH; i++)
  {
    data[i] = i;
  }
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%d\n", data[i]);
  }
  // Initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";
  printf("\n");
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%s\n", words[i]);
  }
  printf("\n");
  /*// Data
  pGeneric = data; // Set the generic pointer to the array
  printf("Data array address is -> %p\n", pGeneric); // No cast needed, yet
  // A cast is now needed to let the compiler know the type of data pointed to
  printf("The item pointed to by pGeneric is -> %d\n", *(int*)pGeneric);
  // The cast tells the compiler what the address type is
  pGeneric = (int*)pGeneric + 1;
  printf("The item pointed to by pGeneric now is -> %d\n", *(int*)pGeneric);
  */
  //* // Words
  pGeneric = words; // Set the generic pointer to the array
  printf("Words array address is -> %p\n", pGeneric); // No cast needed, yet
  // A cast is now needed to let the compiler know the type of data pointed to
  printf("The item pointed to by pGeneric is -> %s\n", *(char**)pGeneric);
  // The cast tells the compiler what the address type is
  pGeneric = (char**)pGeneric + 1;
  printf("The item pointed to by pGeneric now is -> %s\n", *(char**)pGeneric);
  //*/
  printf("\n");
  
  return(0);
}