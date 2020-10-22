#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
  float height;
  float width;
}

void createRectangle(&r, 10.50, 20.75);
float getRectangleArea(&r);
changeRectangleArea(&r, 10, 50);
getRectangleArea(&r);
  
int main(void)
{
  struct rectangle r;
  
  createRectangle(&r, 10.50, 20.75);
  getRectangleArea(&r);
  changeRectangleArea(&r, 10, 50);
  getRectangleArea(&r);
  
  return(0);
}