#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node * tail)
{
    Node * temp = tail;
    while (temp != NULL)
    {
        cout<< temp->val << " ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    // Node * tail = new Node(NULL);
    Node * tail  = b;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a; 
    // b->next = tail;

    print_normal(head);
    print_reverse(tail);
    
    cout<< head->val << endl;
    cout<< tail->val << endl ;

    return 0;
}