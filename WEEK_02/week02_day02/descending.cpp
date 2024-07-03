#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void descending(Node *&head, Node *&tail)
{
    for (Node *i = head; i->next != NULL; i = i->next)
    {
        for (Node *j = i->next; j != NULL; )
        {
            if (i->val < j->val)
            {
                swap(i->val, j->val);
            }
            else j = j->next;   
        }
    }
}
void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int data;
    while (true)
    {
        cin >> data;
        if (data == -1)
            break;
        insert_tail(head, tail, data);
    }
    descending(head, tail);
    print(head);

    return 0;
}