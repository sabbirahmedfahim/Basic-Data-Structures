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
    list<int> myList = {10, 30, 20, 30, 40};

    replace(myList.begin(), myList.end(), 30, 100);
    print(myList);

    return 0;
}