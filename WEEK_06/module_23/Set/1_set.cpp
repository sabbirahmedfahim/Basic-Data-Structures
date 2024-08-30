#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    set<int> s;
    while (n--)
    {
        int data; cin >> data;
        s.insert(data); // O(logN)
    }
    for(int i : s) cout << i << " ";
    cout << endl << endl;
    // it also works
    for(auto it = s.begin(); it!=s.end();it++)
    {
        cout << *it << " ";
    }


    return 0;
}