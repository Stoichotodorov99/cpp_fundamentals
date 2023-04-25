#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void printAlphabet(bool isUpperCase)
{   char firstLetter;
    char lastLetter ;
    if (isUpperCase)
    {
        firstLetter = 'A';
        lastLetter = 'Z';

    } else
    {
        firstLetter = 'a';
        lastLetter = 'z';

    }




    for (char letter = firstLetter; letter <= lastLetter; letter++)
    {
    cout << letter ;
    }
    cout << endl;
}

int main()
{
    printAlphabet(false);
    return 0;
}
