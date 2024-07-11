#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    cin >> n;
    int tempN = n;
    while (n--)
    {
        int data;
        cin >> data;
        st.push(data);
    }

    queue <int> q;
    int m;
    cin >> m;
    int tempM = m;
    while (m--)
    {
        int data;
        cin >> data;
        q.push(data);
    }

    if (tempM != tempN)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
            {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }

    return 0;
}