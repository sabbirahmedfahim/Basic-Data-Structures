#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        q.push(data);
    }
    cout << "Queue Size: " << q.size() << endl << endl;

    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}