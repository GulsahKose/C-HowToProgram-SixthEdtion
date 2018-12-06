#include <iostream>

using namespace std;

int lineerSearch(const int[], int, int);

int main()
{
    const int size = 10;
    const int array[size] = {2, 8, -15, 9, 0, 3, 87, 6, 99, 4};
    int result;

    result = lineerSearch(array, size, -15);

    if(result != -1)
        cout << "Element found in: " << result << endl;
    else
        cout << "Element not found!" << endl;

    return 0;
}

int lineerSearch(const int arr[], int size, int element)
{
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
            return i;
    }    

    return -1;
}
