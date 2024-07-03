/*
log10(1000) = 4
log2(1000) = 10
worst case on O(logN) is log2(n) base
trick: the answer of the equation is the total step the program run !!

for log complexity, the value of n extend until 10^18 because it takes
really a few steps
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{ // O(logN)    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i = i*2)
    {
        cout << i << endl; //ans is a very few steps
    }

    return 0;
}