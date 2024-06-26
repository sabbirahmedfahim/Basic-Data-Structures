#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v1(3, 100);
    vector<int> vector2(v1);//copying elements including the size of vector v1

    for (int i = 0; i < vector2.size(); i++)
    {
        cout << vector2[i] << " ";
    }
    cout<< endl << vector2.size();

    return 0;
}