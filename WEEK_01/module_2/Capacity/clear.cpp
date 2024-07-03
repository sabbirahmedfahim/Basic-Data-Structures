#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.clear();
    /*
    Clear function clears the vector elements. Do not delete the memory, 
    only clear the values.
    Clears the size, not the internal memory.
    */
   cout<<"Size: " << v.size()<<endl;

   for (int i = 0; i < v.size(); i++)
   {
    cout<<v[i]<<" "; //think why nothing is printed inside the loop
   }

   //now I'm trying to get access of the dynamic vector usign index
   cout<<v[0]<<endl;
   cout<<v[1]<<endl;
   cout<<v[3]<<endl;
   /*To sum up, after clearing the size, size will be 0. But the memory
   stores the values, do not delete.
   */
   

    return 0;
}