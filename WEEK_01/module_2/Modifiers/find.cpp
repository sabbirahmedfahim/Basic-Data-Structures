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
    vector<int> v = {1, 2, 8, 4, 7, 8, 2, 5, 8, 3, 8};
    // v.find() // wait, find is not a function of vector, it's from algorithm
    
    auto it1 = find(v.begin(), v.end(), 8);
    auto it2 = find(v.begin(), v.end(), 100);
    if (it1 == v.end()) cout << "Not Found";
    else cout << "Found" << endl << endl;
    if (it2 == v.end()) cout << "Not Found";
    else cout << "Found" << endl;
    
    
    return 0;
}