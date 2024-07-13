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
    // unsorted array-> search
    // option-1: linear search -> O(N) // better    
    // option-2:  sort -> O(NlogN)
    //            binary search -> O(logN)
    // option-2: O(NlogN) + O(logN) -> O(NlogN)
    
    sort(v.begin(), v.end());
    int data;
    cin >> data;
    // int l = v[0], r = v[n - 1]; // wrong, we're working with index, not values
    int l = 0, r = n-1;
    bool flag = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (v[mid] == data)
        {
            flag = true;
            break;
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
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}