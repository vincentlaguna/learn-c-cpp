#include <stdio.h>
#include <unistd.h>

int main(void)
{
  puts("\n<<< Example of forking processes >>>\n");
  // Creating 1st child
  int n1 = fork();
  // Creating 2nd child. 1st child also executes this line
  int n2 = fork();
  
  if(n1 > 0 && n2 > 0)
  {
    printf("Parent\n");
    printf("%d %d \n", n1, n2);
    printf("   my id is %d \n", getpid());
    printf("   my parent is %d \n", getppid());
  }
  
  return(0);
}