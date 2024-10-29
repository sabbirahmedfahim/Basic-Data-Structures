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
    vector<long long int> prefixSum(n);
    prefixSum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefixSum[i] = prefixSum[i - 1] + v[i];
    }

    vector<long long int> suffixSum(n);
    suffixSum[0] = v[n-1];
    for (int i = 1, j = n-2; i < n; i++, j--)
    {
        suffixSum[i] = suffixSum[i-1] + v[j];
    }
    // reverse(suffixSum.begin(), suffixSum.end());
    
    for (int i = 0; i < n; i++)
    {
        if (prefixSum[i - 1] == suffixSum[i - 1])
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}