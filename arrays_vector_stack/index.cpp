
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

int indexOf(int searchNum, vector<int> numbers)
{
    for(int i = 0; i < numbers.size(); i++)
    {
        if (searchNum == numbers[i])
        {
            return i;

        }

    }
    return -1;
}

int main()
{
    vector<int> numbers = readSizeOfArray();


    int searchNum;
    cin >>  searchNum;

    cout << indexOf(searchNum, numbers) << endl;

    return 0;

}
