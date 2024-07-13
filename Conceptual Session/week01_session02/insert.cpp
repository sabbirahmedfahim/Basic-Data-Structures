#include <bits/stdc++.h>
using namespace std;

int main()
{
    // insert multiple values at single time
    vector <int> v = {10, 20, 30, 40};
    v.insert(v.begin()+2, {88, 99}); // v.insert(pos, val)
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl << endl;

    vector <int> v2 = {5, 4, 3, 2, 1};
    // insert single value at multiple times
    v2.insert(v2.begin()+1, 5, 81); // v.insert(pos, times, val)
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl << endl;

    vector <int> v3 = {100, 200, 300, 400};
    vector <int> v4 = {7, 8, 9};
    // insert multiple values at single times
    v3.insert(v3.begin()+1, v4.begin(), v4.end()); // v.insert(pos, start, end)
    for (int i : v3)
    {
        cout << i << " "; 
    }
    cout << endl << endl;

    vector <int> v5 = {100, 200, 300, 400};
    vector <int> v6 = {7, 8, 9, 10, 11};
    // insert multiple values at single times at a range
    v5.insert(v5.begin()+1, v6.begin()+1, v6.end()-2); // v.insert(pos, start, end)
    for (int i : v5)
    {
        cout << i << " "; 
    }
    cout << endl << endl;

    

    return 0;
}