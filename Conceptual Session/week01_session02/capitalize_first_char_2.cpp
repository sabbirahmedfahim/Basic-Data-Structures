#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        v[i][0] -= 32;
    }
    for (string c : v) // string, not char
    {
        cout << c << endl;
    }

    return 0;
}