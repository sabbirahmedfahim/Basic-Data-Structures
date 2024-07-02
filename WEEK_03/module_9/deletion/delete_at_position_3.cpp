#include <bits/stdc++.h>
using namespace std;
class Node
{ // this code has an issue with head, tail
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
void delete_at_position(Node *head, int pos) // O(n)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}
void delete_head(Node* &head) // O(1)
{ 
    Node * deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}
void delete_tail(Node* &tail) // O(1)
{
    Node * deleteNode = tail;
    tail = tail->prev; 
    tail->next = NULL;
    delete deleteNode;
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
    Node *head = new Node(10);
    Node *tail = head;

    delete_head(head); // Problems with head
    delete_tail(head); // Problems with tail

    print_normal(head);
    print_reverse(tail);

    return 0;
}