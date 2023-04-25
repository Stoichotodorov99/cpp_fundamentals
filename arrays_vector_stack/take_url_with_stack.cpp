#include <iostream>
using namespace std;
#include <stack>
#include <string>
int main()
{
    stack<string> history;
    string current;
    getline(cin, current);
    while(current != "/end")
    {
        if(current == "/back")
        {
            if (history.size() > 1)
            {
                history.pop();
                current = history.top();
            }
            else
            {
                cout << "no previous urls" <<endl;
            }

        }
        else
        {

            history.push(current);
        }
        cout << current << endl;

        getline(cin, current);

    }


    return 0;
}


