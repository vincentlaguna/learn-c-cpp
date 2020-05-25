#include <stdio.h>
#include <stdlib.h>

typedef void (*callback_func)(char *info);
typedef struct callback_info
{
  callback_func func_ptr;
}cb_info;
void reg_callback(cb_info *ptr, void(*callback_func)(char *info));
void callback_function();

int main(void)
{
  char *info = "This is a test";
  cb_info *ptr = NULL;
  ptr = (cb_info*)malloc(sizeof(cb_info));
  reg_callback(ptr, callback_function);
  ptr -> func_ptr(info);
  return 0;
}

void reg_callback(cb_info *ptr, void (*callback_func)())
{
  ptr -> func_ptr = callback_func;
}

void callback_function(char *info)
{
  printf("Information passed: [%s]\n", info);
}