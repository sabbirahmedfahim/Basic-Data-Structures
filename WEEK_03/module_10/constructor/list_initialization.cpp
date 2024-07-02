#include <bits/stdc++.h>
using namespace std;

int main()
{
    // List initialization (Construct a list with 0 elements)
    list <int> my_List1;
    cout << "my_List1 Value: " << my_List1.front() << endl;
    cout << "Size: " << my_List1.size() << endl << endl;

    // Construct a list with N elements and the value will be garbage.
    list <int> my_List2(8);
    // cout << my_List2[0] << endl; // Wrong
    cout << "my_List2 Values: ";
    for (auto it = my_List2.begin(); it != my_List2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl << "Size: " << my_List2.size() << endl << endl;

    // Construct a list with N elements and the value will be V.
    list <int> my_List3(3, 5);
    cout << "my_List3 Values: ";
    for (int val: my_List3)
    {
        cout << val << " ";
    }
    cout << endl << "Size: " << my_List3.size() << endl << endl;

    // Construct a list by copying another list
    list <int> my_List4(my_List3);
    cout << "my_List4 Values: ";
    for (int val: my_List4)
    {
        cout << val << " ";
    }
    cout << endl << "Size: " << my_List4.size() << endl << endl;

    // Construct a list by copying all elements from an array A of size N.
    int arr[5] = {10, 20, 30, 40, 50};
    // list <int> my_List5(arr); // YOU SHOULD CATCH THE ERROR: linked list(linked list) vs this
    list <int> my_List5(arr, arr+5);
    cout << "my_List5 Values: ";
    for (int val: my_List5)
    {
        cout << val << " ";
    }
    cout << endl << "Size: " << my_List5.size() << endl << endl;

    // Construct a list by copying all elements from vector my_arr.
    // vector <int> arr(3) = {10, 20, 30, 40, 50, 60}; // Wrong
    vector <int> my_arr = {10, 20, 30, 40, 50, 60};
    // list <int> my_List5(arr); // YOU SHOULD CATCH THE ERROR: linked list(linked list) vs this
    list <int> my_List6(my_arr.begin(), my_arr.end());
    cout << "my_List6 Values: ";
    for (int val: my_List6)
    {
        cout << val << " ";
    }
    cout << endl << "Size: " << my_List6.size() << endl << endl;

    return 0;
}
