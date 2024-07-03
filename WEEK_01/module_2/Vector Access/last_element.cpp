#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int data: v)
    {
        cout << data << " ";
    }
}
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    
    cout << v.back() << endl; // prefer
    cout << v[v.size()-1] << endl;

    
    return 0;
}