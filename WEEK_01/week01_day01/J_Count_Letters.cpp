#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    string data;
    cin >> data;
    v.push_back(data);

    // vector <int> freq(26) = {0};
    vector<int> freq(26, 0);
    for (int i = 0; i < v.size(); i++)
    {
        for (char data : v[i])
        {
            freq[data - 97]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] != 0)
        {
            cout << (char) (i+97) << " : " << freq[i] << endl;
        }
    }

    return 0;
}