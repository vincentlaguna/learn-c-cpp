#include <stdio.h>
#include <stdbool.h>
// Line styles
#define SOLID 0
#define DOTTED 1
#define DASHED 2
// Primary colors
#define BLUE 4
#define GREEN 2
#define RED 1
// Mixed Colors
#define BLACK 0
#define YELLOW (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN (GREEN | BLUE)
#define WHITE (RED | GREEN | BLUE)

const char *colors[8] = {"black", "red", "green", "yellow",
                         "blue", "magenta", "cyan", "white"};
                         
struct box_properties
{
  bool opaque : 1;
  unsigned int fill_color : 3;
  unsigned int : 4;
  bool show_border : 1;
  unsigned int border_color : 3;
  unsigned int border_style : 2;
  unsigned int : 2;
};

void show_settings(const struct box_properties *pb);

int main(void)
{
  
  return 0;
}

void show_settings(const struct box_properties *pb)
{
  
}