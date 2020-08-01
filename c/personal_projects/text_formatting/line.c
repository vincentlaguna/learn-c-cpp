// Function definitions from line.h. Needs to keep track of line buffer
#include <stdio.h>
#include <string.h>
#include "line.h"

#define MAX_LINE_LEN 60

char[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

void clear_line(void)
{
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
}

void add_word(const char *word)
{
  if(num_words > 0)
  {
    line[line_len] = ' ';
    line[line_len+1] = '\0';
    line_len++;
  }
  strcat(line, word);
  num_words++;
}

int space_remaining(void)
{
  
}