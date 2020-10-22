#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
  float height;
  float width;
};

void createRectangle(struct rectangle *pR, float h, float w);
void getRectangleArea(struct rectangle *pR);
void changeRectangleArea(struct rectangle *pR, float h, float w);

int main(void)
{
  struct rectangle r;
  
  createRectangle(&r, 10.50, 20.75);
  getRectangleArea(&r);
  // changeRectangleArea(&r, 10, 50);
  // getRectangleArea(&r);
  
  return(0);
}

void createRectangle(struct rectangle *pR, float h, float w)
{
  pR = malloc(sizeof(struct rectangle));
  
  if (pR == NULL)
  {
    fprintf(stderr, "Allocation error\n");
    exit(1);
  }
  pR->height = h;
  pR->width = w;
  
  printf("h = %f, w = %f\n", pR->height, pR->width);
}

void getRectangleArea(struct rectangle *pR)
{
  float area;
  area = pR->height * pR->width;
  
  printf("The area of the rectangle is -> %f\n", area);
}

void changeRectangleArea(struct rectangle *pR, float h, float w)
{
  
}