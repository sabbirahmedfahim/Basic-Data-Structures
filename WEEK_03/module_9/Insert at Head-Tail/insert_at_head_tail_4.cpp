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
void insert_at_position(Node *head, int pos, int val) // O(n)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *newNode = new Node(val);

    newNode->next = temp->next;
    temp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = temp;
}
void insert_head(Node *&head, Node *&tail, int val) // O(1)
{
    if (head == NULL)
    {
        Node *newNode = new Node(val);
        head = newNode;
        tail = newNode; // Imagine
        return;
    }

    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node* &tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    // Node * temp = tail;
    if (tail == NULL)
    {
        // newNode = head; // mistake
        // newNode = tail; // mistake
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; // We took reference (&) just because for this line, imagine why
}
int List_Size(Node *head) // O(n)
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
void print_normal(Node *head) // O(n)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
void print_reverse(Node *tail) // O(n)
{ 
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int pos, val;
    cin >> val;
    insert_tail(head, tail, val);

    print_normal(head);
    print_reverse(tail);
    cout << endl;

    return 0;
}