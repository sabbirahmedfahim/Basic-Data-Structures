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
void print_reverse(Node *head)
{
    if (head == NULL)
    {
        return;
    }
    print_reverse(head->next);
    cout << head->val << " ";
}
int main()
{
    Node * head = NULL;
    Node * tail = NULL;

    int data;
    while (true)
    {
        cin >> data;
        if (data == -1) break;
        insert_tail(head, tail, data);
    }
    print_reverse(head);

    return 0;
}