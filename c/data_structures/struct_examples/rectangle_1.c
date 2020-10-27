#include <stdio.h>
#include <stdlib.h>

struct rectangle
{
  double height;
  double width;
};

void createRectangle(struct rectangle *pR, double h, double w);
void getRectangleArea(struct rectangle *pR);
void changeRectangleArea(struct rectangle *pR, double h, double w);

int main(void)
{
  struct rectangle r;
  
  createRectangle(&r, 10.50, 20.75);
  getRectangleArea(&r);
  // changeRectangleArea(&r, 10, 50);
  // getRectangleArea(&r);
  
  return(0);
}

void createRectangle(struct rectangle *pR, double h, double w)
{
  // pR = malloc(sizeof(struct rectangle));
  
  // if (pR == NULL)
  // {
  //   fprintf(stderr, "Allocation error\n");
  //   exit(1);
  // }
  pR->height = h;
  pR->width = w;
  
  printf("h = %f, w = %f\n", pR->height, pR->width);
}

void getRectangleArea(struct rectangle *pR) // returning null values!!!... Still trying to figure out why...
{
  printf("The area of the rectangle is -> %lf\n", pR->height); 
}

void changeRectangleArea(struct rectangle *pR, double h, double w)
{
  
}