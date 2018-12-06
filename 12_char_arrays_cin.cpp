#include <iostream>

using namespace std;

int main()
{
    // To enter char less then array size causes logic errors.

    const int size = 5;
    char word[size];

    cout << "Please enter four character and press enter: ";
    cin >> word;

    for(int i=0; i<size; i++)
        cout << word[i] << endl;

    return 0;
}
