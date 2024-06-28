#include <bits/stdc++.h>
using namespace std;
void updateValue(int * a)
{
    a = NULL; 
}  

int main()
{
    int a = 10;

    int * ptr = &a;
    updateValue(ptr);

    cout << a << " " << endl;
    cout << ptr << " " << endl; 
    cout << *ptr << " " << endl; 
   
    return 0;
}