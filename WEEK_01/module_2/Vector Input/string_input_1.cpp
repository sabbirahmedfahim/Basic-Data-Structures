#include <bits/stdc++.h>
using namespace std;

int main()
{
    // without declaring the size
    int n;
    cin>>n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        // cin>> v[i]; // WRONG: think why
        string s;
        cin>> s;
        // v.push_back(v[i]); // also wrong
        v.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    
    
    

    return 0;
}