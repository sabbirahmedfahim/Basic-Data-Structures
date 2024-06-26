#include <bits/stdc++.h>
using namespace std;

/*
v.capacity() : Returns the current available capacity of the vector.
*/
int main()
{
    vector <int> v;
    cout<< "Size vs Capacity: notice differences"<< endl << v.size()<<" - "<< v.capacity()<<endl;

    v.push_back(10); //push back function increases size and add values
    cout<< v.size() << " - " << v.capacity() <<endl;

    v.push_back(20);
    cout<<v.size() << " - " << v.capacity() <<endl; 
    
    v.push_back(1000);
    cout<<v.size() << " - " << v.capacity() <<endl;

    v.push_back(99);
    cout<<v.size() << " - " << v.capacity() <<endl;

    v.push_back(44);
    cout<<v.size() << " - " << v.capacity() <<endl;
    
    

    /*So the size in increasing 1 per push, but the ultimate capacity of dynamic vector
    increases by 2x (double),
    say, 1*2 = 2
    2*2 = 4
    4*2 = 8
    8*3 = 24
    */

    return 0;
}