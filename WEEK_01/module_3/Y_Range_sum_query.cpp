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
    vector<long long int> prefixSum(n);
    prefixSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = v[i] + prefixSum[i - 1];
    }

    while (t--)
    {
        long long int sum = 0;
        int x, y;
        cin >> x >> y;
        x--, y--;
        if (x == 0) sum = prefixSum[y];
        else sum = prefixSum[y] - prefixSum[x - 1];
        cout << sum << endl;
    }

    return 0;
}