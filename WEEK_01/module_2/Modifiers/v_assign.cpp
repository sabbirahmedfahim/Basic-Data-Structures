#include <bits/stdc++.h>
using namespace std;

int main()
{
    // complexity: O(1) [because size is same]
    vector<int> v1 = {10, 20, 30};
    vector<int> v2 = {61, 94, 37};
    v1 = v2;
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    // Complexity: O(N)
    vector<int> v3 = {10, 20, 30, 40, 50};
    vector<int> v4 = {61, 94, 37};
    v3 = v4;
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }

    // Complexity: O(N)
    vector<int> v5 = {10, 20, 30, 40, 50};
    vector<int> v6 = {61, 94, 37};
    v6 = v5;
    for (int i = 0; i < v6.size(); i++)
    {
        cout << v6[i] << " ";
    }

    return 0;
}

