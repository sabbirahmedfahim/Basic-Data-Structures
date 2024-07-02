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
    list<int> myList = {10, 30, 60, 20, 50, 40};
    // sort : acsending order
    myList.sort(); // O(N)
    print(myList);

    // sort : decsending order
    myList.sort(greater <int>()); // O(N)
    print(myList);

    return 0;
}