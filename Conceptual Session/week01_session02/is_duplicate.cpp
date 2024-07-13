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
    sort(v.begin(), v.end());
    int data;
    cin >> data;
    int l = 0, r = n - 1;
    bool is_duplicate = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == data)
        {
            if (mid != 0 && v[mid - 1] == data || mid!=0 && v[mid + 1] == data)
            {
                is_duplicate = true;
                break;
            }
        }
        else if (data > v[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    if (is_duplicate)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    return 0;
}