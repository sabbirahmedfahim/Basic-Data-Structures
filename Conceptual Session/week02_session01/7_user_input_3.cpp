#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode; // we assigned the address 'newNode' in the 'head' position
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; // we assigned the address 'newNode' in the 'temp->next' position
}
void insert_at_head(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}
void insert_at_position(Node *&head, int pos, int data)
{
    if (pos == 1)
    {
        insert_at_head(head, data);
        return;
    }
    Node *newNode = new Node(data);
    Node *temp = head;
    for (int i = 1; i < pos - 1; i++) // understand?
    {
        temp = temp->next;
    }
    // temp->next->next = newNode->next;
    newNode->next = temp->next;
    temp->next = newNode;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}
int main()
{
    Node *head = NULL; // imagine of a team Leader

    while (1)
    {
        int pos, data;
        cin >> pos >> data;
        if (data == -1) break;
        insert_at_position(head, pos, data);
        printList(head);
        cout <<endl;
    }

    return 0;
}