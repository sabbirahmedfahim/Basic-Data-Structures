#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq; // max heap
    /*
    Why use a priority queue instead of sorting?
    Answer: A priority queue allows us to maintain a sorted structure with O(logN)
    time complexity for push/pop operations, whereas sorting an entire array takes 
    O(NlogN) time complexity. This is more efficient when we need to frequently
    insert or remove elements while keeping them sorted.
    */
    while (1)
    {
        int cmd; cin >> cmd;
        if(cmd == 0) // insert a value
        {
            int data; cin >> data;
            pq.push(data); // O(logN)
        }
        else if(cmd == 1) // 
        pq.pop(); // O(logN)
        else if(cmd == 2) 
         cout << pq.top() << endl; // O(1)
        else break;
    }
    
    return 0;
}