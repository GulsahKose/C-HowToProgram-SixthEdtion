#include <iostream>

using namespace std;

void cubeByReference ( int* );

int main()
{
    int number = 5;
    cout << "Current number: " << number << endl;

    cubeByReference( &number );
    cout << "After cubeByReference number: " << number << endl;

    return 0;
}

void cubeByReference( int *sidePtr )
{
    *sidePtr = *sidePtr * *sidePtr * *sidePtr;
}
