#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main ()
{
    string text;
    getline(cin, text);

    istringstream textIn(text);
    string currentWord;
    textIn >> currentWord;
    while(textIn)
    {
        cout << currentWord << endl;
        textIn >> currentWord;
    }

    return 0;
}
