#include <iostream>

using namespace std;

// Write a program that uses a for statement to find the smallest of several integers.
// Assume that the first value read specifies the number of values remaining and that
// the first number is not one of the integers to compare.

int main()
{
    int count;
    int number;
    int smallest;

    cout << "Enter how many number you will compare to find smalest integer?: " << endl;
    cin >> count;

    cout << "Enter the integers: "<< endl;

    for(int i=0; i<count; i++)
    {
        cin >> number;

        if(i == 0)
            smallest = number;

        if(number < smallest)
            smallest = number;
    }

    cout << "Smallest integer is: " << smallest << endl;

    return 0;
}
