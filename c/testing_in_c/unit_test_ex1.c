#include <assert.h>
// From my_sum.c
int my_sum(int a, int b) 
{
    return a + b;
}
// In test_my_sum.c
int main(int argc, char *argv[]) 
{
    assert(2 == my_sum(1, 1));
    assert(-2 == my_sum(-1, -1));
    assert(0 == my_sum(0, 0));
    // ...
    return(0);
}