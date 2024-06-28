#include <bits/stdc++.h>
using namespace std;
void updateValue(int *x)
{
    *x = 999;
}

int main()
{
    int n = 20;
    updateValue(&n);
    cout << n << endl;

    int * ptr = &n;
    updateValue(ptr);
    cout << n << endl;
    cout << *ptr << endl;

    return 0;
}