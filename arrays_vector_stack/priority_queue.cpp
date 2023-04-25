#include <iostream>
using namespace std;
#include <queue>

int main()
{
    priority_queue<int> q;

    q.push(42);
    q.push(69);
    q.push(13);

    while(!q.empty())
    {
        cout << q.top() <<endl;
        q.pop();
    }

    return 0;
}



