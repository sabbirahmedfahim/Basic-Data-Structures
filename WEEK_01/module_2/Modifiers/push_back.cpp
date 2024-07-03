#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}
int main()
{
    vector<int> v = {10, 20, 30, 40};
    v.push_back(100);
    print(v);
    
    return 0;
}