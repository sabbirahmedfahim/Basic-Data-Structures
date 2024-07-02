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
    list<int> myList = {10, 10, 20, 10, 10, 10};
    // myList.unique(10); // it will automatically detect

    // without sorting: O(N)
    myList.unique();
    print(myList);

    // sort + unique : O(NlogN)
    myList.sort();
    myList.unique();
    print(myList);
    

    return 0;
}