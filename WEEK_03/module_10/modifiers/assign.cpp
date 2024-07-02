#include <bits/stdc++.h>
using namespace std;
void print(list<int> myList)
{
    for (int data : myList)
    {
        cout << data << " ";
    }
    cout << endl
         << endl;
}
int main()
{
    // Assign another list. (way-1)
    list<int> myList1 = {10, 20, 30};
    list<int> myList2(myList1);
    print(myList2);

    // Assign another list. (way-2)
    list<int> myList3 = {10, 20, 30, 40, 50};
    list<int> myList4;
    myList4 = myList3;
    print(myList4);

    // Assign another list. (way-3)
    list<int> myList5 = {10, 20, 30, 40};
    list<int> myList6;
    // myList6(myList5); // Wrong, because, unlike vector, the linked list
    // doesn't access the full list all
    myList6.assign(myList5.begin(), myList5.end());
    print(myList6);

    return 0;
}