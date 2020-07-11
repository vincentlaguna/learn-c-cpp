int better_than_average(int class_points[], int class_size, int your_points) 
{
  // Your code here :)
  // Note: class_size is the length of class_points.
  int class_point_sum = 0;
  int class_point_avg = 0;
  
  for(int i = 0; i < class_size; i++)
    class_point_sum += class_points[i];  
  class_point_avg = class_point_sum / class_size;
  
  if(your_points > class_point_avg)
    return 1;
  return 0;
}

// Tests --Need to relocate and install library (criterion)
#include <criterion/criterion.h>

int better_than_average(int *, int, int);

Test(better_than_average, ex_tests) {
  int cp1[] = {2, 3};
  int cp2[] = {100, 40, 34, 57, 29, 72, 57, 88};
  int cp3[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
  cr_assert(better_than_average(cp1, 2, 5));
  cr_assert(better_than_average(cp2, 8, 75));
  cr_assert_not(better_than_average(cp3, 9, 9));
}