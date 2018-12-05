#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Bar chart with asterisks

    const int array_length = 11;
    int grade_frequency[array_length] = {0, 0, 0, 1, 0, 0, 1, 2, 4, 2, 1};

    cout << "Grade Distrubitions:" << endl;

    for(int i=0; i<array_length; i++)
    {
        if(i == 0)
            cout << "  0-9:  ";
        else if(i == 10)
            cout << "  100:  ";
        else
            cout << i * 10 << "-" << i * 10 + 9 << ":  ";

        for(int j = 0; j < grade_frequency[i]; j++)
            cout << "*";
        cout << endl;
    }

    return 0;
}
