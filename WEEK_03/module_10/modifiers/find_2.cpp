#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    auto it = find(myList.begin(), myList.end(), 50);
    // Problem with list : goto find_2.cpp for accurate version

    if (it == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
        cout << "Found" << endl;

    list<int> myList2 = {10, 20, 30, 40, 50};
    auto it2 = find(myList2.begin(), myList2.end(), 20);
    if (it2 == myList.end())
    {
        cout << "Not found" << endl;
    }
    else
        cout << "Found" << endl;

    return 0;
}