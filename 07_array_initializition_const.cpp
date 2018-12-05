#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Initializing an array with cont variables.

    const int array_length = 10;

    int arr1[array_length];

    for(int i=0; i<array_length; i++)
    {
        arr1[i] = i * 2;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for(int i=0; i<array_length; i++)
    {
        cout << setw(7) << i << setw(13) << arr1[i] << endl;
    }

    return 0;
}
