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