#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, t;
    cin >> N >> t;
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> v[i];
    }
    while (t--)
    {
        int data;
        cin >> data;
        auto it = find(v.begin(), v.end(), data);
        if (it == v.end()) cout << "not found" << endl;
        else cout << "found" << endl;
    }

    return 0;
}