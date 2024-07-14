#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
int main()
{
    // int * arr = new int[5]; // an example of heap memory allocation
    Node *x = new Node; // x is a pointer to Node, allocated on the heap
    Node *y = new Node; // y is a pointer to Node, also allocated on the heap
    // see, x, y is a pointer variable

    // accessing the 'data' member of the Node object through pointer dereference 
    (*x).data = 10; // [x is an address]
    y->data = 20; // accessing 'data' using pointer-to-member operator
    
    // x->next = &y;  // Incorrect: &y is the address of y, not y itself.
    x->next = y; // Corrected: y is a pointer variable to Node, so it can be assigned to x->next.
    // [y is an address]
    y->next = NULL;

    cout << x->data << " " << y->data << endl << endl;  

    return 0;
}