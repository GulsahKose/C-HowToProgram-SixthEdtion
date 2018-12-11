#include <iostream>

using namespace std;

int main()
{
    int x;     // defination of normal variable
    int *xPtr; // defination of pointer variable

    x = 5;     // normal variable initializing
    xPtr = &x; // pointer variable initializing

    // xPtr = 0x7ffefe78000c; // is a wrong initializing
    // xPtr = 10; // is a wrong initializing


    cout << "x: "<< x << endl;           // normal value of x
    cout << "xPtr: "<< xPtr << endl;     // xPtr's value is address of x
    cout << "*xPtr: "<< *xPtr << endl;   // *xPtr is an alias to x (*xPtr = x )
    cout << "&*xPtr: "<< &*xPtr << endl; // &*xPtr is an alias to &x (&*xPtr = &x )
    cout << "*&xPtr: "<< *&xPtr << endl; // &*xPtr and *&xPtr is same expression
    cout << "&xPtr: "<< &xPtr << endl;   // address of xPtr; 

    return 0;
}
