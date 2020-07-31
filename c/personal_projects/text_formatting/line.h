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