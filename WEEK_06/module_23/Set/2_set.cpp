#include <bits/stdc++.h>
using namespace std;

int main()
{
    // so set removes all duplicate values, and sorts in accending order
    /*
    Use Set: (recommended!)
    to remove duplicates at once
    to sort in accending order in O(N*logN) complexity
    to search a value
    */
    int n; cin >> n;
    set<int> s;
    while (n--) // O(N) + O(logN)
    {
        int data; cin >> data;
        s.insert(data); // O(logN)
    }
    for(int i : s) cout << i << " ";

    return 0;
}