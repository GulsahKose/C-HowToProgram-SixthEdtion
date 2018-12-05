#include <iostream>
#include <iomanip>

using namespace std;

// Execises 5.19 Print a table that shows the approximate value of p after each of
// the first 1,000 terms of this series.

int main()
{
    double pi = 4;
    double j = 3;

    for(int i=0; i<1000; i++)
    {
        if( i%2 == 0 )
        {
            pi = pi - 4/j;
        }
        else
        {
            pi = pi + 4/j;
        }

        j += 2;

        cout << fixed << setprecision(39) << pi << endl;
    }

    return 0;
}
