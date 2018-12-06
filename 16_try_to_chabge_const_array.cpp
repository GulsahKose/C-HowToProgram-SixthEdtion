#include <iostream>

using namespace std;

void try_modify_array( const int[]);

int main()
{
    const int size = 3;
    const int arr[size] = {1, 2, 3};

    try_modify_array(arr);

    return 0;
}

void try_modify_array( const int array[])
{
    array[2] += 5; // error: assignment of read-only location
}
