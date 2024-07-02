#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    auto it = find(myList.begin(), myList.end(), 50);
    // Problem with list : goto find_2.cpp for accurate version
    cout << *it << endl; // garbage value

    return 0;
}