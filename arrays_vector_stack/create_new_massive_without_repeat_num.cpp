#include <iostream>
#include <vector>
using namespace std;

vector<int> readSizeOfArray()
{
     vector<int> numbers;

    int n;
    cin >> n;

    for(int i=0; i < n; i++)
    {
        int element;
        cin >> element;
        numbers.push_back(element);
    }
    return numbers;
}

vector<int> getFilltered(vector<int> v , int valueToRemove)
{
    vector<int> filltred;

    for(int current : v)
    {
        if (current != valueToRemove)
        {
        filltred.push_back(current); }
    }

    return filltred;
}

void printArray(vector<int>arr)
{
    for (int current : arr)
    {
        cout << current << " ";
    }
}
int main()
{
    vector<int> arr = readSizeOfArray();


    int numberToRemove;
    cin >> numberToRemove;

    vector<int> arrFilltered = getFilltered(arr, numberToRemove);

    printArray(arrFilltered);


    return 0;

}
