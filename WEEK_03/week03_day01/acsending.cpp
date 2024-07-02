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
    myList.sort();
    for (int data: myList)
    cout << data << " ";

    return 0;
}