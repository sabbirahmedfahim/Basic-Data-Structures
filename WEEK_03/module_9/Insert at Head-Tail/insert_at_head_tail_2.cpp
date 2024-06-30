#include <bits/stdc++.h>
using namespace std;
class Node
{ // the code has an issue: Fixed at next file (before jumping next, find out the error)
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
void  insert_head (Node * &head, int val)
{
    if (head == NULL)
    {
        Node * newNode = new Node(val);
        head = newNode;
        return;
    }
    
    Node * newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    // newNode->prev = NULL;
    // head->next = NULL;
}
void insert_tail(Node * &tail, int val)
{
    Node * newNode = new Node(val);
    // Node * temp = tail;
    if (tail == NULL)
    {
        newNode  = tail;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; // We took reference (&) just because for this line, imagine why
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
    Node * head = NULL;
    Node * tail = NULL;
    
    int pos, val;
    cin >> pos >> val;
    if (pos == 0)
    {
        insert_head(head, val);
    }
    else if (pos = List_Size(head))
    {
        insert_tail(tail, val);
    }  
    else if (pos >= List_Size(head))
    {
        cout<< "Invalid" <<endl;
    }
    else insert_at_position(head, pos, val);
    
    
    print_normal(head);
    print_reverse(tail); 
    cout << endl;

    

    return 0;
}