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
    list<int> myList = {10, 20, 30};
    print(myList);

    myList.push_back(40); // Inserted at tail : O(1)
    print(myList);
    
    myList.push_front(100); // Inserted at head : O(1)
    print(myList);
    

    return 0;
}