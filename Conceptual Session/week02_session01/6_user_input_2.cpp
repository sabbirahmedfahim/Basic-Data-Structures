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
    Node * temp = head;
    while (temp->next != NULL)
    {   
        temp = temp->next;
    }
    temp->next = newNode; // we assigned the address 'newNode' in the 'temp->next' position
}
void insert_at_head (Node * &head, int data)
{
    Node * newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
    // return; // is it must?
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
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_at_head(head, data);
    }
    printList(head);

    return 0;
}