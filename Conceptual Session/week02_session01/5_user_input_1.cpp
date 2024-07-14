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
    // while (temp != NULL) 
/* wrong because temp->next is an object where we link & temp is a pointer var*/ 
    while (temp->next != NULL)
    {   
        temp = temp->next;
    }
    temp->next = newNode; // we assigned the address 'newNode' in the 'temp->next' position
    newNode->next = NULL; // worthless, Goto next line[comment] to understand the logic
// we initialized the constructor with 'this->next = NULL'. So newNode->next is by default NULL.
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
    // initially there is no leader
    while (1)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head, data);
    }
    printList(head);

    return 0;
}