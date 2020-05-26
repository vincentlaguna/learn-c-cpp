#include <iostream>

void (*fptr)(void *, char*);

class MyClass {
 
public:
  void show_message(char *message) {
    std::cout << "The message is " << message;
  }
  
  static void caller_to_display(void *obj, char *messsage);
};

void MyClass::caller_to_display(void *obj, char *messsage) {
  MyClass *tempObj = (MyClass*)obj;
  tempObj -> show_message(message);
}

int main() {
  MyClass obj;
  fptr = MyClass::caller_to_display;
  (*fptr)((void*)&obj, "This is a callback");
  return 0;
}