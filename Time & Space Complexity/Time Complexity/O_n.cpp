/*
for the maximum case, we can say that O(n) means my program will work
if the maximum value of n is 10^7
O(n) [aka o of n complexity] means the program will run 'n' steps

case-1:
for (int i=0; i<n; i++) ...
OR
for (int i=0; i<4n; i++) ...
OR
for (int i=0; i<n/7; i++) ...

the value of n will be always n, we simply ignore constant value
(if you don't know why we ignore, learn first)


*/

#include <bits/stdc++.h>
using namespace std;

int main()
{ // this is a O(n) [o of n] complexity program
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;

    return 0;
}