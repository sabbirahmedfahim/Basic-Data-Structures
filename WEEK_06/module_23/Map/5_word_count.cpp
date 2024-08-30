#include <bits/stdc++.h>
using namespace std;

int main()
{
    string sentence;
    getline(cin, sentence);
    map<string, int> mp;
    string word;
    stringstream ss(sentence);
    while (ss >> word)
    {
        // cout << word << endl;
        mp[word]++;
    }
    for(auto it = mp.begin(); it!=mp.end();it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
    cout << mp["love"] << endl;
    cout << mp["sylhet"] << endl;
    cout << mp["he"] << endl;
    return 0;
}