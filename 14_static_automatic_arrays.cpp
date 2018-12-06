#include <iostream>

using namespace std;

void staticArray();
void automaticArray();

int main()
{
    cout << "First call: " << endl;

    staticArray();
    automaticArray();

    cout << "Second call: " << endl;

    staticArray();
    automaticArray();

    return 0;
}

void staticArray()
{
    const int size = 3;
    static int arr1[size];

    cout << "Default Values of Static Array: " << endl;

    for(int i = 0; i < size; i++)
        cout << "arr1[" << i << "]=" << arr1[i] << " ";
    cout << endl;

    cout << "Values of Static Array After Increasing: " << endl;

    for(int i = 0; i < size; i++)
        cout << "arr1[" << i << "]=" << (arr1[i] += 5) << " ";
    cout << endl;

    cout << endl;
    cout << endl;

}

void automaticArray()
{
    const int size = 3;
    int arr2[size] = {1, 2, 3};

    cout << "Default Values of Automatic Array: " << endl;

    for(int i = 0; i < size; i++)
        cout << "arr2[" << i << "]=" << arr2[i] << " ";
    cout << endl;

    cout << "Values of Automatic Array After Increasing: " << endl;

    for(int i = 0; i < size; i++)
        cout << "arr2[" << i << "]=" << (arr2[i] += 5) << " ";
    cout << endl;

    cout << endl;
    cout << endl;
}
