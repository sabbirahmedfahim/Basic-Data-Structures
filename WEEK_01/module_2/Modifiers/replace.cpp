#include <bits/stdc++.h>
using namespace std;
void print(vector<int> v)
{
    for (int data: v)
    {
        cout << data << " ";
    }
}
int main()
{
    vector<int> v = {1, 2, 8, 4, 7, 8, 2, 5, 8, 3, 8};
    // v.replace() // wait, replace is not a function of vector, it's from algorithm
    replace(v.begin(),v.end()-1, 8, 100);
    // if you understand why the last '8' was not printed, you're done
    print(v);
    
    return 0;
}