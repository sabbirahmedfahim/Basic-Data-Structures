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
    vector<int> leftSum(n);
    leftSum[0] = 0;
    for (int i = 1; i < n; i++)
    {
        leftSum[i] = v[i - 1] + leftSum[i - 1];
    }
    for (int i = 0; i < n; i++)
    {
        cout << leftSum[i] << " ";
    }

    return 0;
}