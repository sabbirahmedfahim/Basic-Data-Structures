#include <bits/stdc++.h>
using namespace std;
// to understand fully, you must watch module 22-3, 22-4
int main()
{
    vector<int> v = {50, 40, 45, 30, 35, 42, 32, 25, 20, 10}; // level order
    // we visualize as a complete binary tree. but it is actually an array.
    int x; cin >> x;  // say 55
    v.push_back(x);
    int cur_index = v.size() - 1;
    // cout << cur_index << endl; // it shows index, not data
    // int parent_index = (cur_index - 1) / 2; // rules (index-1)/2
    // cout << parent_index << endl;
    while (cur_index != 0) // O(logN)
    {
        int parent_index = (cur_index - 1)/2;
        if (v[cur_index] > v[parent_index]) // children index > parent index
            swap(v[cur_index], v[parent_index]);
        else break; // illustrate why
        cur_index = parent_index;
    }
    for(int data : v) cout << data << " ";
    
    return 0;
}
