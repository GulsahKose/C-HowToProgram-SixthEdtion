#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int responseSize = 40;
    const int frequencySize = 11;

    const int responses[ responseSize ] = { 1, 2, 6, 4, 8, 5, 9, 7, 8,
        10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
        5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 };

    int frequencies[frequencySize] = {0};

    for(int res=0; res<responseSize; res++)
    {
        frequencies[responses[res]]++;
    }

    cout << "Rating" << setw(15) << "Frequency" << endl;

    for(int i=1; i<frequencySize; i++)
    {
        cout << setw(6) << i << setw(15) << frequencies[i] << endl;
    }

    return 0;
}
