#include <bits/stdc++.h>
using namespace std;
class Node
{ // this is the final file for deletion
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
void delete_head(Node *&head, Node *&tail) // O(1)
{
    // if (head->next == NULL)
    // {
    //     head = head->next; // AKA null
    //     tail = NULL;
    //     return;
    // }

    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;

    if (head->next == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
}
void delete_tail(Node *&head, Node *&tail) // O(1)
{
    Node *deleteNode = tail;
    tail = tail->prev;
    delete deleteNode;
    if (tail == NULL)
    {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

int main()
{
    Node *head = new Node(10);
    Node *tail = head;

    int pos;
    cin >> pos;
    if (pos >= List_Size(head))
    {
        cout << "Invalid Index" << endl;
    }
    else if (pos == 0)
    {
        delete_head(head, tail);
    }
    else if (pos == List_Size(head) - 1)
    {
        delete_tail(head, tail);
    }
    else
    {
        delete_at_position(head, pos);
    }

    print_normal(head);
    print_reverse(tail);

    return 0;
}