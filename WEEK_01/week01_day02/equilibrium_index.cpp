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
    int pref_index = 0;
    suffixSum[pref_index] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        pref_index++;
        suffixSum[pref_index] = suffixSum[pref_index - 1] + v[i];
    }
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