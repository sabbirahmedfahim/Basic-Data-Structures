#include <bits/stdc++.h>
using namespace std;

int main()
{
    // A set removes all duplicate values and sorts them in ascending order.
    /*
    Using a Set: (recommended!)
    - To remove duplicates efficiently.
    - To automatically sort elements in ascending order with O(N*logN) complexity.
    - To search for a value.
    */
    int n; cin >> n;
    set<int> s;
    while (n--) // O(N) + O(logN)
    {
        int data; cin >> data;
        s.insert(data); // O(logN)
    }
    int search_data; cin >> search_data;
    if(s.count(search_data)) cout << "found" << endl; // O(logN)
    else cout << "not found!";
    /*
    Final note: A set counts all unique values and returns 1 if the value is found, 
    otherwise 0. Since duplicates are removed, a value can appear at most once.
    */
   cout << endl;
   cout << s.count(2) << endl; // O(logN) 
   cout << s.count(93) << endl; // O(logN)

    return 0;
}