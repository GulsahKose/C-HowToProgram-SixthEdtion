#include <iostream>
#include <cctype>

using namespace std;

void printCharacters( const char *);

int main()
{
    // Printing a string one character at a time using
    // a non-constant pointer to constant data.

    const char phrase[] = "print characters of a string";

    printCharacters(phrase);

    return 0;
}

void printCharacters( const char *phrasePtr)
{
    for(; *phrasePtr != '\0'; phrasePtr++)
        cout << *phrasePtr;

    cout << endl;
}
