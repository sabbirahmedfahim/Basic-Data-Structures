#include <bits/stdc++.h>
using namespace std;

int main()
{
    // size declared
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i] << endl;
    // }

    // shortcut for loop AKA range based for loop
    for (string data : v)
    {
        cout << data << endl;
    }

    return 0;
}
