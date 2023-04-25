#include <iostream>
using namespace std;

char getLexFirstLetter(char letter1, char letter2)
{   char first;
    if (letter1 < letter2)
       {
        return letter1;
       }
    return letter2;
    }


int main( )
{
    cout << getLexFirstLetter('b', 'c') << endl;


}
