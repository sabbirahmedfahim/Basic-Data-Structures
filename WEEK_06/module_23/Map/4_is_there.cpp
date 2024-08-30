#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> mp; 
    mp["Sabbir Ahmed Fahim"] = 39;
    mp["Ashraful Islam"] = 75;
    mp["Mr X"] = 44;
    
    if(mp.count("Sabbir Ahmed Fahim")) cout << "found" << endl;
    else cout << "not found!" << endl;
    if(mp.count("Akil Ahmed")) cout << "found" << endl;
    else cout << "not found!" << endl;
    

    return 0;
}