#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void inputVector(vector<int> &);
void outputVector(const vector<int> &);

int main()
{
    vector<int> arr1(10);
    vector<int> arr2(7);

    cout << "Size of arr1 is " << arr1.size() << endl; 
    cout << "Size of arr2 is " << arr2.size() << endl; 

    cout << "Please input 10 integers: " << endl;
    inputVector(arr1);
    outputVector(arr1);
    

    return 0;
}

void inputVector( vector<int> &array)
{
    for(int i=0; i<array.size(); i++)
    {
        cin >> array[i];
    }
}

void outputVector(const vector<int> &array)
{
    cout << "Array is: ";

    for(int i=0; i<array.size(); i++)
        cout << array[i] << setw(4); 
    cout << endl;
}
