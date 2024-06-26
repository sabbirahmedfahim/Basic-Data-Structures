#include <bits/stdc++.h>
using namespace std;
//Goto: push_back_2.cpp to know about the capacity function
//in this file, I'll revice the uses of push_back() function

int main()
{
    vector <int> v;

    // v.push_back(10, 30); //push back doesn't allow multiple values
    v.push_back(100);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;

    v.push_back(200);
    v.push_back(400);
    v.push_back(999);
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;
    

    return 0;
}