#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> my_vector(4); //size: 4

    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << " "; //we did not give any values yet
    }
    cout << endl << my_vector.size();

    return 0;
}