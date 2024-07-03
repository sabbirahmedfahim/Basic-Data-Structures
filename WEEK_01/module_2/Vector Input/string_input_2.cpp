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
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}