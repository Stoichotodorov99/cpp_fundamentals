#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
vector<int> readNumbersOfArray()
{
        int n=1;
    vector<int> numbers;
    while (n!=0)
    {
        cin >> n;
        numbers.push_back(n);

    }
    return numbers;
}

void calculateFibonacci(vector<int>& fibonacci, int lastInclusive)
{
    for(int i=2; i < lastInclusive; i++)
    {
        fibonacci.push_back(fibonacci[i-1] + fibonacci[i-2]);
    }
}

void print(vector<int>arr)
{
    for(int i=0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
vector<int> findNumInFib(vector<int> arr, vector<int> fib)
{
    vector<int> fibonacciElementOfRow {0, 1};

    for(int i=2; i < fib.size(); i++)
    {
        if(find(arr.begin(), arr.end(), fib[i]) != arr.end())
        {
            fibonacciElementOfRow.push_back(fib[i]);
        }
    }

    return fibonacciElementOfRow;
}

primeNum(vector<int>arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        bool prime = true;
        if (arr[i] == 1 || arr[i] ==0)
        {
            prime = false;}

        for(int j=2; j<= arr[i]/2; j++)
        {
            if(arr[i] % j ==0)
            {
                prime = false;

            }
        }
        if(prime == true)
        {
            cout <<arr[i] << " ";
        }

    }
}


void facOfNum(vector<int>arr)
{
    for(int i =0; i < arr.size()-1; i++)
    {
       int factoriel = 1;
        for(int j=1; j<= arr[i]; j++)
        {
            factoriel *= j;

        }
        cout << factoriel << " " ;
    }
}

int main()
{

    vector<int> fib {0, 1};
    calculateFibonacci(fib, 8);

    vector<int> rowOfInt = readNumbersOfArray();




 //   vector<int> fibonacciElementOfRow = findNumInFib(rowOfInt, fib);

//    print(fibonacciElementOfRow);
//primeNum(rowOfInt);
    facOfNum(rowOfInt);
    return 0;
}
