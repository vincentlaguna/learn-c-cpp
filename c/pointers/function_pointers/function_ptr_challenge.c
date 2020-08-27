#include <stdio.h>
#include <malloc.h>
#include <string.h>
// Some random numbers...
int array1[] = {10,20,30,40,50,60,70,80,90,100};
int array2[] = {38,27,87,63,59,223,132,1,19,7};
// Functions
int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mlt(int a, int b) { return a * b; }
int div(int a, int b) { return a / b; }
// Array of pointers to functions (Task #1)
int (*fpArray[]) (int, int) = {&add, &sub, &mlt, &div}; // Note* it must match function type and return parameter
// Perform the given operation on the elements of the array (which are individual functions)
int *performOp(int *a, int *b, int size, int (*f)(int, int)); // <-Adding func ptr params (Task #2)
// Displays the elements of the array
void display(int *x, int size);
// Main Method
int main(void)
{
  puts("Function pointer test!");
  int choice = 0;
  unsigned int size = 0; // Size of the array
  int *result = NULL;
  size = sizeof(array1); // Set size to minimum size of the two arrays
  
  if(sizeof(array2) < size)
    size = sizeof(array2);
  size = sizeof(int);
  
  while(choice != 5)
  {
    printf("\n\nWhich operation would you like to perform? \n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. None ...\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    
    if(choice == 5)
      break;
    if(choice < 1 || choice > 5)
      continue;
    
    int j = choice - 1;
    // Passing in the function pointer from array (Task #3)
    result = performOp(array1, array2, size, fpArray[j]);
    
    printf("\n\nThe Results are ...\n");
    display(result, size);
    
    if(result == NULL)
      free(result);
  }
  return(0);
}
// Function definition of *performOp (Task #4)
int *performOp(int *a, int *b, int size, int (*f)(int, int))
{
  int *c = malloc(sizeof(int) * size);
  
  for(int i = 0; i < size; i++)
  {
    c[i] = (f)(a[i], b[i]);
  }
  return c;
}

void display(int *x, int size)
{
  if(x == NULL)
    return;
    
  for(int i = 0; i < size; i++)
    printf("%d  ", x[i]);
  printf("\n");
}