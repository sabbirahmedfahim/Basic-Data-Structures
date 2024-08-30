#include <bits/stdc++.h>
using namespace std;

class myNode
{
public:
    int val;
    myNode *nextNode;
};

int main()
{
    myNode a, b;
    a.val = 10;
    b.val = 67;

    a.nextNode = &b;
    b.nextNode = NULL;

    cout << a.val << " " << b.val << endl; // printing manually

    // cout << a.val << " " << *a.nextNode << endl; 
    /* The mistake was linking the address of b with a, which holds the property (value) '67'; 
    we did not go through the address to find the value.*/
    cout << a.val << " " << (*(a.nextNode)).val << endl; // hurreh, linked !!
    // at first derenference, then find the member of the class named 'myNode'

    cout << a.val << " " << a.nextNode->val << endl; // dereferencing easily
    

    return 0;
}