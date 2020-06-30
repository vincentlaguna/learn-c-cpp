#include <stdio.h>

void ptr2strings(void);

int main(void)
{
  int *array_ptr[3];
  int i = 1, j = 2, k = 3;
  int ct;
  array_ptr[0] = &i;
  array_ptr[1] = &j;
  array_ptr[2] = &k;
  
  for (ct = 0; ct < 3; ct++)
  {
    printf("Address [%u] value [%d]\n", array_ptr[ct], *array_ptr[ct]);
  }
  printf("\n");
  ptr2strings();
  return 0;
}

void ptr2strings(void)
{
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune", "Pluto"};
  
  for(int i = 0; i < 9; i++)
  {
    if(planets[i][0] == 'M')
    {
      printf("%s begins with -> M\n", planets[i]);
    }
    printf("-> %s\n", planets[i]);
  }
}
