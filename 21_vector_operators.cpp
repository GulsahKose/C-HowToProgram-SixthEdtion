#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr1{1, 2, 3}; // initiliazion way 1
    vector<int> arr2{1, 4, 3}; 

    if(arr1 == arr2)
        cout << "Vectors are equal." << endl;
    else
        cout << "Vectors are not equal." << endl;

    vector<int> arr3(arr2); // initiliazion way 2
    cout << "arr3 is: " << endl;
    for(int i : arr3)
        cout << i << endl;

    arr3[1] = 100;
    cout << " New arr3 is: " << endl;
    for(int i : arr3)
        cout << i << endl;

    vector<int> arr4 = arr3; // initiliazion way 3

    cout << " arr4 is: " << endl;
    for(int i : arr4)
        cout << i << endl;

    vector<int> arr5{9};
    arr1 = arr5;

    cout << "arr1 is: " << endl;
    for(int i : arr1)
        cout << i << endl;

    arr1[15] = 12; //works [] operator doesn't check out of range situation.

    arr1.at(15) = 12; // runtime error: terminate called after throwing an instance of 'std::out_of_range'

    return 0;
}
