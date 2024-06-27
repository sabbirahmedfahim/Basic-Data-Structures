#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node * next;
    Node(int val)
    {
        (*this).val = val;
        this->next = NULL;
    }
};

int main()
{
    // Node * head = new Node; //we hafta initialize node with value
    Node * head = new Node(10); //remember, head is a Pointer Variable
    Node * random_node = new Node(12);

    

    return 0;
}