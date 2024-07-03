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
    vector<int> v = {10, 20, 30, 40};
    v.pop_back();
    v.pop_back();
    print(v);
    
    return 0;
}