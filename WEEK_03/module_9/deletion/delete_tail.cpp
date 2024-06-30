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
int List_Size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
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
void print_reverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}
void delete_at_position(Node* head, int pos)
{
    Node * temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node * deleteNode = temp->next;
    temp->next = temp->next->next;
    // temp->next->prev = temp->prev; // draw for better understanding
    temp->next->prev = temp;
    delete deleteNode;
}
void delete_tail(Node* &tail)
{
    Node * deleteNode = tail;
    tail = tail->prev;
    // wait wait before deletion, garbage value seeking you :p
    tail->next = NULL;
    delete deleteNode;
}

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = c;

    // connection
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;
    
    delete_tail(tail);
    
    print_normal(head);
    print_reverse(tail);
    cout << endl;

    return 0;
}