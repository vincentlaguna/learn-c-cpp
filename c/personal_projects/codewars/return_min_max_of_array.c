#include <stdio.h>

/* TESTING
#include <criterion/criterion.h>

int min(int*,int);
int max(int*,int);

Test(exampleTests, should_pass_all_the_tests_provided) {
    int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
    cr_assert_eq(min(array1, 7), -110);
    int array2[5] = {42, 54, 65, 87, 0};
    cr_assert_eq(min(array2, 5), 0);
    int array3[8] = {4,6,2,1,9,63,-134,566};
    cr_assert_eq(max(array3, 8), 566);
    int array4[1] = {5};
    cr_assert_eq(max(array4, 1), 5);
}
*/

int min(int *array, int arrayLength);
int max(int *array, int arrayLength);

int main(void)
{
  /*max({4,6,2,1,9,63,-134,566}); // returns 566
  min({-52, 56, 30, 29, -54, 0, -110}); //returns -110
  max({5}); // returns 5
  min({42, 54, 65, 87, 0});*/ // returns 0
  
  int array1[7] = {-52, 56, 30, 29, -54, 0, -110};
  int array2[5] = {42, 54, 65, 87, 0};
  int array3[8] = {4,6,2,1,9,63,-134,566};
  int array4[1] = {5};
    
  printf("Return from function is -> %d\n", min(array1, 7));
  printf("Return from function is -> %d\n", min(array2, 5));
  printf("Return from function is -> %d\n", max(array3, 8));
  printf("Return from function is -> %d\n", max(array4, 1));

  return 0;
}

int min(int *array, int arrayLength)
{
  int mn = array[0];
  
  for(int i = 0; i <= arrayLength - 1; i++)
  {
    if(array[i] < mn)
      mn = array[i];
  }
  return mn;
}

int max(int *array, int arrayLength)
{
  int mx = array[0];
  
  for(int i = 0; i <= arrayLength - 1; i ++)
  {
    if(array[i] > mx)
      mx = array[i];
  }
  return mx;
}