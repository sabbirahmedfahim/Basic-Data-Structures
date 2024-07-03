/*
whenever I see something X something
that means it is a nested loop

for (int i=1; i<=n; i++)
{
    for (int j=1; j<=n; j*=2)
    {
          
    }
}
*/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; //let's say 20
    cin>>n;
    for (int i = 1; i <= n; i++) //O(N)
    {
        int x = i;
        while (x>0) //[O(log(i)), ultimately] O(logN)
        {
            int digit = x%10;
            cout<<digit<<" ";
            x/=10;
        }
        cout<<endl;
    }
    

    return 0;
}