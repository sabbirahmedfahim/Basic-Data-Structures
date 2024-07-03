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
    // insert single value
    vector<int> v1 = {10, 20, 30, 40};
    v1.insert(v1.begin()+2, 100);
    print(v1);

    // insert multiple values
    vector<int> v2 = {10, 20, 30, 40};
    v2.insert(v2.begin()+2, {100, 200});
    print(v2);

    // insert another vector
    vector<int> v3 = {10, 20, 30, 40};
    vector<int> v4 = {33, 333, 999};

    // v3.insert(v3.begin()+2, v4); // it will not work: why?
    v3.insert(v3.begin()+2, v4.begin(), v4.end());
    print(v3);
    
    return 0;
}