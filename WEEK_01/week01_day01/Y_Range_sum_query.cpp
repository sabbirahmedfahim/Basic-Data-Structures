#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (t--)
    {
        long long int sum = 0;
        int x, y;
        cin >> x >> y;
        x = x - 1;
        y = y - 1;
        for (int i = x; i <= y; i++)
        {
            sum = sum + v[i];
        }
        cout << sum << endl;
    }

    return 0;
}