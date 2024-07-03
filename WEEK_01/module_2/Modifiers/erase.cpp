#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int data: v)
    {
        cout << data << " ";
    }
    cout << endl << endl;
}
int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // erase single value
    v.erase(v.begin()+2);
    print(v);

    // erase multiple values //v.begin()
    vector <int> v2 = {1, 2, 3, 4, 5, 6, 7};
    v2.erase(v2.begin()+2, v2.begin()+3); // interesting output
    print(v2);

    // erase multiple values //v.end()
    vector <int> v3 = {1, 2, 3, 4, 5, 6, 7};
    v3.erase(v3.begin()+2, v3.end()-4); // interesting output
    print(v3);
    
    
    return 0;
}