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
int main()
{
    vector<int> arr = readSizeOfArray();


    int numberToRemove;
    cin >> numberToRemove;

    for (int i=0; i < arr.size(); i++)
    {
        if (arr[i] != numberToRemove)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;

}
