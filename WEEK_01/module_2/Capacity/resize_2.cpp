#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.resize(2);
    v.resize(7);
   
   cout<<"Size: " << v.size()<<endl;

   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" "; //since we did not declare index values, they'be be 0
   }
   

    return 0;
}