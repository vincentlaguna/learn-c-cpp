#include <stdio.h>

void array(int size);
int sum2d(int rows, int columns, int array[rows][columns]); // C99/C11 you can use [*][8]

int main(void)
{
  array(5);
  array(20);
  array(9);
  
  /*
  size_t rows = 0;
  size_t columns = 0;
  printf("Print the number of rows you want to store: ");
  scanf("%zd", &rows);
  printf("Print the number of rows you want to store: ");
  scanf("%zd", &columns);
  float beans[rows][columns];
  */
  return 0;
}

void array(int size)
{
  char alpha[size];
  int x = 0;
  
  while(x < size)
  {
    alpha[x] = 'A' + x;
    printf("alpha is -> %c: \n", alpha[x]);
    x++;
  }
}

int sum2d(int rows, int columns, int array[rows][columns])
{
  int r;
  int c;
  int tot = 0;
  
  for(r = 0; r < rows; r++)
    for(c = 0; c < columns; c++)
      tot += array[r][c];
  return tot;
}