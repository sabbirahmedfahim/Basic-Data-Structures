#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> my_vector(4, 7); //size: 4, each index value: 7

    for (int i = 0; i < my_vector.size(); i++)
    {
        cout << my_vector[i] << " ";
    }
    cout << endl << my_vector.size();

    return 0;
}