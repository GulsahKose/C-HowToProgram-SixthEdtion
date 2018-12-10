#include <iostream>

using namespace std;

void insertionSort1(int[], int);
void insertionSort2(int[], int);
void printArray(int[], int);

int main()
{
    const int size = 4;
    int arr[size] = {7, 3, 5, 1};

    insertionSort2(arr, size);

    return 0;
}

void insertionSort2(int arr[], int size)
{
    int key, j;

    for(int i=1; i<size; i++)
    {
        key = arr[i];
        j = i-1;

        while( j>=0 && key<arr[j])
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void insertionSort1(int arr[], int size)
{
    int tmp;

    for(int key = 1; key < size; key ++)
    {
        key = arr[key];

        for(int i = key-1; i>=0; i--)
        {
            if(key < arr[i])
            {
                tmp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = tmp;
                key = arr[i];
            }
        }
    }    
}

void printArray(int arr[], int size)
{

    cout << "[ ";
    for(int i=0; i<size; i++)
        cout << arr[i] << " ";
    cout << "]" << endl;
}
