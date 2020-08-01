#include <stdio.h>
#include "word.h"

int read_char(void) // Helper function for read_word()
{
  int ch = getchar();
  
  if(ch == '\n' || ch == '\t')
    return ' ';
  return ch;
}

void read_word(char *word, int len)
{
  int ch = 0;
  int pos = 0;
  // First loop = skips over white spaces, stopping at first non-blank character
  while((ch == read_char()) == ' ')
    ; 
  // Second Loop = reads characters until space or EOF
  while(ch != ' ' && ch != EOF)
  {
    if(pos < len) // Body = stores characters in word until len or EOF
      word[pos++] = ch;
    ch = read_char();
  }
  word[pos] = '\0'; // Ending with NULL character making it a string
}