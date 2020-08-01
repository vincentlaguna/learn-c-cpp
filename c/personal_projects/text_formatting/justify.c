#include <string.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(void)
{
  char word[MAX_WORD_LEN + 2];
  int word_len;
  
  clear_line();
  
  for(;;)
  {
    read_word(word, MAX_WORD_LEN + 1);
    word_len = strlen(word);
    flush_line();
    return 0;
  }
  return 0;
}