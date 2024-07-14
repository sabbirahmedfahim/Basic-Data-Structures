#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data) // constructor installed :D
    {
        this->data = data; // member of the Node instance
        this->next = NULL; // member of the Node instance
    }
};
int main()
{
    int a, b;
    Node x(10), y(20);      // x and y are on the stack
    Node *m = new Node(30); // m is on the heap
    Node *n = new Node(40); // n is on the heap
    // m->data = 30;    // member of a heap-allocated object
    // n->data = 40;    // member of a heap-allocated object
    m->next = n; // m points to n
    n->next = NULL;  // member of a heap-allocated object

    // x.data = 10;
    // y.data = 20;

    x.next = &y;
    y.next = NULL;

    cout << x.data << " " << y.data << endl << endl;
    cout << m->data << " " << n->data << endl << endl;

    return 0;
}