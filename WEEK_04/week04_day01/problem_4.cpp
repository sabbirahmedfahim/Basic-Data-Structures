#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q1;
    int n;
    cin >> n;

    while (n--)
    {
        int data;
        cin >> data;
        q1.push(data);
    }
    stack<int> st;
    while (!q1.empty())
    {
        st.push(q1.front());
        q1.pop();
    }
    queue<int> q2;
    while (!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}