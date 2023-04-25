#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void swapValues(int& value1, int& value2)
{
   int oldA = value1;
    value1 = value2;
    value2 = oldA;
}

int main()
{
   int a, b;
   a = 49;
   b = 69;

    swapValues(a, b);

    cout << a << " " << b << endl;

    return 0;
}

