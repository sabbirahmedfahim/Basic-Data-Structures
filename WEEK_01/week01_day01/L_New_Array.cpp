#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>> n;
    vector <int> v1(n);
    vector <int> v2(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    // vector <int> v3(n+n);
    vector <int> v3;
    // v3.insert(v3.begin()+0, v2.begin(), v2.end(), v1.begin(), v1.end());
    v3.insert(v3.end(), v2.begin(), v2.end());
    v3.insert(v3.end(), v1.begin(), v1.end());
    
    for (int data : v3)
    {
        cout << data << " ";
    }
    
    

    return 0;
}