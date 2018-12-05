#include <iostream>
#include <iomanip>

using namespace std;

// Print the value 333.546372 in a field width of 15 characters with precisions
// of 1, 2 and 3. Print each number on the same line. Left-justify each number
// in its field. What three values print?


int main()
{
    double i = 333.546372;

    cout << fixed << left 
         << setprecision( 1 ) << setw(15) << i
         << setprecision( 2 ) << setw(15) << i
         << setprecision( 3 ) << setw(15) << i
         << endl;

    return 0;
}
