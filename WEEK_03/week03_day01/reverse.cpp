#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    // head->next = newNode;
    // newNode = tail;
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}
void reverse(Node *head, Node *tail)
{
    Node *i = head;
    Node *j = tail;
    while (i != j && i->next != j)
    {
        swap(i->data, j->data);
        i = i->next; 
        j = j->prev;
    }
    swap(i->data, j->data); // Deeply imagine why I used it
}

void print(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
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
        insert_at_tail(head, tail, data);
    }

    reverse(head, tail);
    print(head);

    return 0;
}