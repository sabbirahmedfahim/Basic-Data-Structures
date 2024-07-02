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

    // Insert single value

    // myList.insert(myList.begin()+2, 100); // It will not work: WHY?
    /*
 Because myList.begin() returns an iterator, not a pointer, and we cannot
 add integers directly to iterators. Instead, we need to use the next
 function to get the position to insert the value. That's why I used next.
 It returns an iterator advanced by a specified number of positions.
 */
    myList.insert(next(myList.begin(), 1), 100); // O(N)
    print(myList);

    // Insert multiple values
    myList.insert(next(myList.begin(), 0), {77, 45, 36}); // O(N)
    print(myList);

    // Insert a list
    list<int> myList1 = {1, 2, 3, 4};
    list<int> myList2 = {110, 32};
    myList1.insert(next(myList1.begin(), 2), myList2.begin(), myList2.end());
    print(myList1);

    // Insert a vector
    vector<int> myVector = {23, 45, 65};
    list<int> my_hablu_list = {0, 11, 55, 44};
    my_hablu_list.insert(next(my_hablu_list.begin(), 1), myVector.begin(), myVector.end());
    print(my_hablu_list);

    return 0;
}