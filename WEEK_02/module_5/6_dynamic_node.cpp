#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

int main()
{
    // Node * head = new Node; // We have to initialize the node with a value
    // new Node(10); // This WILL RETURN A POINTER of Node data type, which should be stored in a pointer variable
    Node *head = new Node(10); // remember, head is a Pointer Variable
    Node *random_node = new Node(12);

    // (head->next) = &random_node; //think why '&' cannot be used
    /*
    because we maked a Pointer Variable named 'random_node' which contains
    address of random_node's Node, then why we need to add extra '&' to
    switch the address??
    Why do we need to say an address as an address of an addresss of a?
    */

    // Using dereference and dot operator
    (*head).next = random_node;

    // Using arrow operator
    head->next = random_node;

    // Printing values: DESTROY YOUR CONFUSION
    cout << head->val << " " << head->next << endl;
    
    /* 
    First things first, if you go to head->next you will find a pointer that
    gives you an address. The confusion arises because you might think you 
    should get the value directly without mentioning the member. However, 
    head->next is a pointer to the 'random_node' itself. 
    */

    cout << (*head).val << " " << (*(*head).next).val << endl;

    return 0;
}