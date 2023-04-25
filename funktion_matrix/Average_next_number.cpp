#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double movingAverage(int nextNumber)
{
    static int count = 0;
    static int sum = 0;
    sum += nextNumber;
    count++;
    return sum / (double)count;
}

int main()
{
   cout << movingAverage(4) << endl;
   cout << movingAverage(6) << endl;
   cout << movingAverage(5) << endl;




    return 0;
}

