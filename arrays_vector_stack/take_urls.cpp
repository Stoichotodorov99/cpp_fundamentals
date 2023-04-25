#include <iostream>
using namespace std;
#include <vector>
#include <string>
int main()
{
    vector<string> history;
    string current;
    getline(cin, current);
    while(current != "/end")
    {
        if(current == "/back")
        {
            if (history.size() > 1)
            {
                history.pop_back();
                current = history[history.size()-1];
            }
            else
            {
                cout << "no previous urls" <<endl;
            }

        }
        else
        {

            history.push_back(current);
        }
        cout << current << endl;

        getline(cin, current);

    }


    return 0;
}

