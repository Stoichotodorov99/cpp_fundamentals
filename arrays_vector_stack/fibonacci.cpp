#include <iostream>
#include <cmath>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i <= n; i++)
        cout << i << ": " << arr[i] << endl;
}

void calculateFibonacci(int fib[], int lastInclusive)
{
        for (int i = 2; i <= lastInclusive; i++)
    {
      fib[i] = fib[i - 2] + fib[i - 1];
    }

}

int main()
{
    int fibonacci[20] {0, 1};

    int n;
    cin >> n;

    calculateFibonacci(fibonacci, n);
    printArray(fibonacci, n );
    return 0;
}
