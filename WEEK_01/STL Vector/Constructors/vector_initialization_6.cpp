#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v1;
    // v1[2] = 50; //WRONG. because we did not initialize the size of the dynamic vector
    
    vector <int> v1 = {10, 20, 30};
    v1[1] = 9000;
    for (int i = 0; i < v1.size(); i++)
    {
        cout<<v1[i]<<" ";
    }
    


    return 0;
}