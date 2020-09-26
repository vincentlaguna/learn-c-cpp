#include <stdio.h>

#define LENGTH 3

char *words[LENGTH]; // Some strings

int main(int argc, char **argv)
{
  char *pChar;   // Pointer to a character
  char **ppChar; // Pointer to a pointer to a character
  
  printf("\nMultiple indirection example with char types >>>\n\n");
  // Initialize our string array
  words[0] = "zero";
  words[1] = "one";
  words[2] = "two";
  // For Loop
  for(int i = 0; i < LENGTH; i++)
  {
    printf("%s\n", words[i]);
  }
  // B: a pointer to an array of strings
  // Same as a pointer to a pointer to a character
  printf("\nNow print the chars in each string...\n\n");
  ppChar = words; // Initializes the pointer to a pointer to a character
  // Loop over each string
  for(int i = 0; i < LENGTH; i++)
  {
    ppChar = words + i;
    pChar = *ppChar;
    // Process each character in a string
    while(*pChar != 0)
    {
      printf("%c ", *pChar);
      pChar += 1;
    }
    printf("\n");
  }
  printf("\n");
  
  return(0);
}