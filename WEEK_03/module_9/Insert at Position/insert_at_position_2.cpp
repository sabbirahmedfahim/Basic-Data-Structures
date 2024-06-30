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
void insert_at_position(Node *head, int pos, int val)
{
    Node * temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node * newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;

}
int List_Size(Node * head)
{
    Node * temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
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
    Node * c = new Node(40);
    Node * tail  = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a; 
    b->next = c;
    c->prev = b;

    int pos, val;
    cin >> pos >> val;
    if (pos >= List_Size(head))
    {
        cout<< "Invalid" <<endl;
    }
    else
    {
        insert_at_position(head, pos, val);
    }
    
    
    print_normal(head);
    print_reverse(tail); 
    cout << endl;

    

    return 0;
}