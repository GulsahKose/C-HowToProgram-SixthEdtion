#include <iostream>

using namespace std;

// Self exercise 5.2: Sum the odd integers between 1 and 99 using a for statement.
// Assume the integer variables sum and count have been declared.

int main()
{
    int sum = 0;
    for(int count = 1; count <= 99; count+=2)
    {
        sum += count;
    }
    cout << sum << endl;

    return 0;
}
