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


void printArray(vector<int>arr)
{
    for (int current : arr)
    {
        cout << current << " ";
    }
}

void removeFrom (vector<int>& v, int valueToRemove)
{
        for(int i=v.size()-1; i >= 0; i--)
    {
        int current = v[i];
        if(current == valueToRemove)
        {
            v.erase (v.begin()+ i);
        }
    }
}
int main()
{
    vector<int> arr = readSizeOfArray();


    int numberToRemove;
    cin >> numberToRemove;

    removeFrom(arr, numberToRemove);

    printArray(arr);
    return 0;

}
