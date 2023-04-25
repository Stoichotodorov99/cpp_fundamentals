#include <iostream>
using namespace std;
#include <vector>
int main()
{

    vector<vector<int> > m;
    int rows, cols;
    cin >> rows >> cols;

    for(int r=0 ; r < rows; r++)
    {
        vector <int> currentRow;
        for(int c=0; c < cols; c++)
        {
            int currentElement;
            cin >> currentElement;
            currentRow.push_back(currentElement);

        }
    m.push_back(currentRow);

    }


    for(vector<int> row : m)
    {
        for(int element : row)
        {
            cout << element << " ";
        }
    cout <<endl;
    }
    return 0;
}
