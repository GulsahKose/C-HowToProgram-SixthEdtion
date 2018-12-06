#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <ctime>

using namespace std;

int main()
{
    srand( time(0) );

    const int size = 7; 
    int frequency[size] = {0};

    for(int roll=1; roll<=6000000; roll++)
        frequency[1 + rand() % 6]++;

    cout << "Face" << setw(20) << "Frequency" << endl;

    for(int face=1; face<size; face++)
        cout << setw(4) << face <<setw(20) << frequency[face] << endl;

    return 0;
}
