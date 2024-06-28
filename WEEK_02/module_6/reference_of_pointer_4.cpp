#include <bits/stdc++.h>
using namespace std;
//goto reference_of_pointer_5.cpp for understanding the use of '&'
void updateValue(int *a)
{
    cout << "value (updated):  " << a << endl; // val
    cout << "address (updated):" << &a << endl <<endl;
}

int main()
{
    int a = 10;
    int *ptr = &a;
    updateValue(ptr);
    cout << "value (main):    " << ptr << endl; // val
    cout << "address: (main): " << &ptr << endl;

    return 0;
}