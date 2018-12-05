#include <iostream>

using namespace std;

int main()
{
    // Find sum of elements of array

    const int array_length = 10;
    int sum = 0;
    int arr[array_length] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    for(int i=0; i<array_length; i++)
    {
        sum += arr[i];
    }

    cout << "Sum of elements: " << sum << endl;

    return 0;
}
