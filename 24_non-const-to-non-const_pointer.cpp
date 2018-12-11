#include <iostream>
#include <cctype>

using namespace std;

void convertToUppercase(char *);

int main()
{
    // Converting lowercase letters to uppercase letters
    // using a non-constant pointer to non-constant data.

    char phrase[] = "converting lowercase letters";

    cout << "Before converting: " << phrase << endl;

    convertToUppercase(phrase);

    cout << "After converting: " << phrase << endl;


    return 0;
}

void convertToUppercase( char *phrasePtr)
{
    while( *phrasePtr != '\0' )
    {
        if( islower(*phrasePtr) )
            *phrasePtr = toupper(*phrasePtr);

        phrasePtr++;
    }
}
