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
int main() // dramatic output
{
    list<int> myList = {1, 2, 3};

    myList.insert(next(myList.begin(), 5), 100); 
    print(myList);

    myList.insert(next(myList.begin(), 9), 99); 
    print(myList);


    return 0;
}