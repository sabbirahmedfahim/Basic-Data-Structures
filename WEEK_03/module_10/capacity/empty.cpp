#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30};
    cout << "Size: " << myList.size() << endl;
    if (myList.empty())
        cout << "List is empty" << endl;
    else
        cout << "List is filled with data's" << endl;

    myList.clear();
    cout << endl
         << "Size: " << myList.size() << endl;
    if (myList.empty())
        cout << "List is empty" << endl;
    else
        cout << "List is filled with data's" << endl;

    return 0;
}