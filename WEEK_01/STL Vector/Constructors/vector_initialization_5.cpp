#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    vector <int> my_vector (arr, arr+5); //starting pointer, ending pointer
    // vector <int> my_vector (arr, arr+4); //we can also modify the index
    
    for (int i = 0; i < my_vector.size(); i++)
    {
        cout<<my_vector[i]<<" ";
    }
    

    return 0;
}