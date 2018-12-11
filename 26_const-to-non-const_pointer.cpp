#include <iostream>

using namespace std;

int main()
{
    // Attempting to modify a constant pointer to nonconstant data.

    int x, y;

    //ptr is a constant pointer to an integer
    //that can be modified through ptr, but ptr
    //always points to the same memory location.
    int * const ptr = &x;

    *ptr = 7;
    // ptr ++;    // not allowed
    // ptr = &y;  // not allowed

    return 0;
}
