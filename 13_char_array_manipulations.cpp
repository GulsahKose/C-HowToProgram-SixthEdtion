#include <iostream>

using namespace std;

int main()
{
    char string1[20];
    char string2[] = "string literal";

    cout << "Enter the string \"hello there\": " ;
    cin >> string1;

    cout << "string1 is " << string1 << endl;
    cout << "string2 is " << string2 << endl;
    cout << "string1 with spaces is: " << endl;

    for(int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << " ";
    cout << endl;
    

    return 0;
}
