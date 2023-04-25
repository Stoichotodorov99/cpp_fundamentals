#include <iostream>
#include <cmath>
using namespace std;


void increment(int& x)
{
    x++;
}

int main()
{
    int number = 3;
    increment(number);
    cout << number <<endl;


    return 0;
}
