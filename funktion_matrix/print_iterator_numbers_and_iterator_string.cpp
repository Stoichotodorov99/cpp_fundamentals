#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main()
{
    vector<int> numbers {42, 13, 105, 10, 9};

    for(auto i= numbers.begin(); i < numbers.end(); i++)
    {
        cout << *i << " ";
    }
    cout <<endl;

    vector<string> words {"hello", "c++", "purple", "me"};
    for (vector<string>::iterator i = words.begin(); i!= words.end(); i++)
    {
        cout << *i << ": " << i->size() << endl;
    }
    return 0;
}

