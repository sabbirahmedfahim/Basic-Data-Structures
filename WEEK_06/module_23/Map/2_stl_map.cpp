#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp; // we can set <string, string>
    mp.insert({"Sabbir Ahmed Fahim", 39}); // name, jersy
    mp.insert({"Ashraful Islam", 75});
    mp.insert({"Mr X", 44});
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        // cout << it* << " ";
        cout << it->first  << endl; // did not maintain order
    }
    // our job is not to iterate them. we need to find a value using specific pair
    cout << endl << mp["Sabbir Ahmed Fahim"];
    cout << endl << mp["Mr X"];

    return 0;
}