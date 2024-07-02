#include <bits/stdc++.h>
using namespace std;

int main()
{
    list <int> myList = {10, 20, 30, 50};
    cout << "Size: " << myList.size() << endl;
    for (int data: myList)
    {
        cout << data << " ";
    }

    myList.clear();
    cout << endl << "Size: " << myList.size() << endl;
    for (int data: myList)
    {
        cout << data << " ";
    }
    

    return 0;
}