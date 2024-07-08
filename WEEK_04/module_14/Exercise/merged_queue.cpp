#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> Queue1;
    int n;
    cin >> n;
    while (n--)
    {
        int data;
        cin >> data;
        Queue1.push(data);
    }
    queue<int> Queue2;
    int m;
    cin >> m;
    while (m--)
    {
        int data;
        cin >> data;
        Queue2.push(data);
    }
    queue<int> MergedQueue;
    while (!Queue1.empty())
    {
        MergedQueue.push(Queue1.front());
        Queue1.pop();
    }
    while (!Queue2.empty())
    {
        MergedQueue.push(Queue2.front());
        Queue2.pop();
    }
    while (!MergedQueue.empty())
    {
        cout << MergedQueue.front() << " ";
        MergedQueue.pop();
    }

    return 0;
}