#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int toInteger(string numberInSystem, string digits)
{
    int number = 0;

    for(char symbol : numberInSystem)
    {
        int digit = digits.find(symbol);
        number *= 10;
        number += digit;
    }
    return number;
}

string toString(int n)
{
    ostringstream result;
    result << n;

    return result.str();
}

string toSystemRepresentation(int number, string digits)
{
    ostringstream numberOut;

    for(char symbol : toString(number))
    {
        int digit = symbol - '0';
        char digitInOtherSystem = digits[digit];
        numberOut << digitInOtherSystem;
    }
    return numberOut.str();
}

int main ()
{
    string digits;
    getline(cin, digits);

    string firstNumber, secondNumber;
    cin >> firstNumber >> secondNumber;

    int sum = toInteger(firstNumber, digits) + toInteger(secondNumber, digits);


    cout << toSystemRepresentation(sum, digits ) << endl;
    return 0;
}
