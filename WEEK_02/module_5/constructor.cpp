#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val = val;
        // this->next = next; //we assumed that next cell will be NULL
        this->next = NULL;
    }
};

int main()
{
    Node a(120); //The value of a is 120 & the next of a is NULL
    Node b(343); //The value of b is 343 & the next of b is NULL
 
    a.next = &b; // we changed the relation from NULL to an pointer address

    cout<<a.val<<" "<<a.next <<endl; //we did not declare any member, a.next is next var after a
    cout<<a.val<<" "<<a.next->val <<endl; 

    return 0;
}