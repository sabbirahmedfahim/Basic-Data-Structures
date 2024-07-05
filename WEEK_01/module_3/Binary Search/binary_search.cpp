#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int data;
    cin >> data;
    int l = 0;
    int r = n - 1;
    bool flag = false;
    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        if (v[mid_index] == data)
        {
            flag = true;
            break;
        }
        if (data > v[mid_index])
        {
            // daan e jaw
            l = mid_index + 1; // think
        }
        else
        {
            // bame jaw
            r = mid_index - 1; // image
        }
    }
    if (flag)
    {
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;
    

    return 0;
}