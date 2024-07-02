#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> myList = {10, 20, 30, 40, 50};
    cout << endl << "Size: " << myList.size() << endl;
    for (int data : myList)
    {
        cout << data << " ";
    }
    myList.resize(2);
    myList.resize(7);
    cout << endl << "Size: " << myList.size() << endl;
    for (int data : myList)
    {
        cout << data << " ";
    }
    
    

    return 0;
}