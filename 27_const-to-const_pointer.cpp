#include <iostream>

using namespace std;

int main()
{
    // Attempting to modify a constant pointer to nonconstant data.

    int x, y;

    //ptr is a constant pointer to an constant integer
    //ptr always points to the same location; the integer
    //at that location cannot be modified.
    const int * const ptr = &x;

    // *ptr = 7;  // not allowed
    // ptr ++;    // not allowed
    // ptr = &y;  // not allowed

    return 0;
}
