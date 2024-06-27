#include <bits/stdc++.h>
using namespace std;

class my_node
{
public:
    int val;
    my_node *pointer_of_the_next_node;
};

int main()
{
    my_node a, b;
    a.val = 10;
    b.val = 67;

    a.pointer_of_the_next_node = &b;
    b.pointer_of_the_next_node = NULL;

    cout << a.val << " " << b.val << endl; // printing manually

    // cout << a.val << " " << *a.pointer_of_the_next_node << endl; 
    /* The mistake was linking the address of b with a, which holds the property (value) '67'; 
    we did not go through the address to find the value.*/
    cout << a.val << " " << (*(a.pointer_of_the_next_node)).val << endl; // hurreh, linked !!
    // at first derenference, then find the member of the class named 'my_node'

    cout << a.val << " " << a.pointer_of_the_next_node->val << endl; // dereferencing easily
    

    return 0;
}