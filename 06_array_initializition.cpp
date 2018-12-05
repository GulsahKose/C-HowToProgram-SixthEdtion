#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Initializing an array's elements to zeros and printing the array.

    int arr1[10];

    for(int i=0; i<10; i++)
    {
        arr1[i] = 0;
    }

    cout << "Element" << setw(13) << "Value" << endl;

    for(int i=0; i<10; i++)
    {
        cout << setw(7) << i << setw(13) << arr1[i] << endl;
    }
    //*****************************************************************


    // Initializing the elements of an array in its declaration.

    int arr2[10] = {2, 3, 4, 8, 96, 45, 65, 25, -5, 10};

    cout << "Element" << setw(13) << "Value" << endl;

    for(int i=0; i<10; i++)
    {
        cout << setw(7) << i << setw(13) << arr2[i] << endl;
    }
    //*****************************************************************


    return 0;
}
