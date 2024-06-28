#include <bits/stdc++.h>
using namespace std;
// in this file, you'll understand the memory allocation of main & custom func
// Now I understand why we used '&' before variable in updateValue func
void updateValue(int * &a)
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