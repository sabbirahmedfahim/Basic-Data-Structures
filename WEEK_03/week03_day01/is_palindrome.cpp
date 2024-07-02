#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList;
    int data;
    while (1)
    {
        cin >> data;
        if (data == -1)
            break;
        myList.push_back(data);
    }
    list<int> myList2(myList);
    myList2.reverse();

    if (myList == myList2)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;

    return 0;
}