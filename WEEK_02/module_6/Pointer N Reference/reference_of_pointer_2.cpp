#include <bits/stdc++.h>
using namespace std;
void updateValue(int *a)
{
    *a = 121;
    a = NULL; // null poiner: it will not affect in the main function
}

int main()
{
    int a = 10;
    updateValue(&a);
    cout << a << " " << endl; 
    //address of a in main and updateValue function are not same

    return 0;
}