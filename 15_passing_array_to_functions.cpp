#include <iostream>

using namespace std;

void modifyArray(int [], int);
void modifyArrayElement(int);


int main()
{
    const int size = 3;
    int arr[size] = {1, 2, 3};

    cout << "After modify array by reference: " << endl;
    modifyArray(arr, size); // original value will change

    cout << "After modify array element by value: " << endl;
    modifyArrayElement(arr[2]); // original value won't chane

    cout << "Last state of modified element: " << endl;
    cout << arr[2] << endl; 

    return 0;
}

void modifyArray(int array[], int size)
{
    for(int i = 0; i < size; i++)
        cout << "array[" << i << "]= " << (array[i] += 5) << " ";

    cout << endl;        
    cout << endl;        
    cout << endl;        
}

void modifyArrayElement(int element)
{
    cout << "Elementi= " << (element *= 10)<< " ";
    cout << endl;        
    cout << endl;        
    cout << endl;        
}

