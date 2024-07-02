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
    list<int> myList = {10, 20, 10, 30, 10, 10};
    myList.remove(10);
    print(myList);

    return 0;
}