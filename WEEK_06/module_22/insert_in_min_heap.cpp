#include <bits/stdc++.h>
using namespace std;
// to understand fully, you must watch module 22-3, 22-4
int main()
{
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) // O(NlogN)
    {
        int x;
        cin >> x;
        v.push_back(x);
        int cur_index = v.size() - 1;
        while (cur_index != 0) // O(logN)
        {
            int parent_index = (cur_index - 1) / 2;
            if (v[cur_index] < v[parent_index])
                swap(v[cur_index], v[parent_index]);
            else
                break;
            cur_index = parent_index;
        }
    }

    for (int data : v)
        cout << data << " ";

    return 0;
}