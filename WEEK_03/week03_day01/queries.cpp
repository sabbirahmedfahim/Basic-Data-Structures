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
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};
int size(Node *head)
{
    Node *tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}
void insert(Node *head, int pos, int val)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    newNode->next->prev = newNode;
    newNode->prev = tmp;
}
void insert_head(Node *&head, Node *&tail, int val)
{
    if (head == NULL)
    {
        Node *newNode = new Node(val);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(val);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void print_linekd_list(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void reverse_print(Node *tail)
{
    while (tail != NULL)
    {
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int t;
    cin >> t;
    while (t--)
    {
        int pos, val;
        cin >> pos >> val;
        if (pos > size(head))
        {
            cout << "Invalid" << endl;
        }
        else if (pos == 0)
        {
            insert_head(head, tail, val);
            print_linekd_list(head);
            reverse_print(tail);
        }
        else if (pos == size(head))
        {
            insert_tail(head, tail, val);
            print_linekd_list(head);
            reverse_print(tail);
        }
        else
        {
            insert(head, pos, val);
            print_linekd_list(head);
            reverse_print(tail);
        }
    }

    return 0;
}