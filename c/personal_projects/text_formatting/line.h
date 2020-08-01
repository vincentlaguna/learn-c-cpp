#ifndef LINE_H
#define LINE_H

// clear_line: Clears the current line.
void clear_line(void);
// add_word: Adds word to the end of the current line.
// If this is not the first word on the line, it puts one space before word
void add_word(const char *word);
// space_remaining: Returns the number of characters left in the current line.
int space_remaining(void);
// write_line: Writes the current line with justification.
void write_line(void);
// flush_line: Writes the current line w/o justification. Does nothing if empty.
void flush_line(void);

#endif
/* Contextual design without implementation:
Here we need to:
- Write contents of line buffer w/o justification
- Determine how many characters are left in line buffer
- Write contents of line buffer with justification
- Clear line buffer 
- Add word to line buffer

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