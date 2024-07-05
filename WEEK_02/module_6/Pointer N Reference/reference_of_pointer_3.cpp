#include <bits/stdc++.h>
using namespace std;
void updateValue(int * &a)
{
    a = NULL; // Sets the pointer to NULL
}

int main()
{
    int a = 10;
    // updateValue(&a);

    int * ptr = &a;
    updateValue(ptr);
    //deeply think 
    cout << a << " " << endl;
    cout << ptr << " " << endl; // Outputs the address stored in 'ptr'
    cout << *ptr << " " << endl; // Outputs the value pointed to by 'ptr'
    /*Caution: things are happening because we used '&' in the function*/

    return 0;
}