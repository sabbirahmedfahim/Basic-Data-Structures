#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    while (t--)
    {
        int data;
        cin >> data;
        int l = 0, r = n - 1;
        bool flag = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (v[mid] == data)
            {
                flag = true;
                break;
            }
            if (data > v[mid])
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (flag)
        {
            cout << "found" << endl;
        }
        else cout << "not found" << endl;
        
    }

    return 0;
}