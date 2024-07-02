#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};

    // myList.erase(myList.begin()+2); // It will not work: WHY?
    myList.erase(next(myList.begin(), 2));   // O(N)
    for (int data : myList)
    {
        cout << data << " ";
    }
    cout << endl;

    return 0;
}