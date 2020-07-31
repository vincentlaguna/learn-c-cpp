#ifndef LINE_H
#define LINE_H

// clear_line: Clears the current line.
void clear_line(void);
// add_word: Adds word to the end of the current line.
// If this is not the first word on the line, it puts one space before word
void clear_line(void);

/* Contextual design without implementation:
for(;;)
{
  read word;
  if(can't read word)
  {
    write contents of line buffer without justification;
    terminate program;
  }
  if(word doesn't fit into line buffer)
  {
    write of line buffer with justification;
    clear line buffer;
  }
  add word to line buffer;
}
*/