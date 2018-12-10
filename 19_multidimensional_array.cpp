#include <iostream>

using namespace std;

int main()
{
    int mArr1[2][3] = {{1,2,3},{4,5,6}};

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
            cout << mArr1[i][j] << " ";
        cout << endl;
    }

    cout << "********************" << endl;

    int mArr2[2][3] = {1,2,3,4,5,6};

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
            cout << mArr2[i][j] << " ";
        cout << endl;
    }

    cout << "********************" << endl;

    int mArr3[2][3] = {{1,2},{4}};

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3; j++)
            cout << mArr3[i][j] << " ";
        cout << endl;
    }

    return 0;
}
