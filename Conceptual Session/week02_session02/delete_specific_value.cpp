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
void insert_at_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode; // we assigned the address 'newNode' in the 'head' position
        tail = newNode; // we assigned the address 'newNode' in the 'tail' position
        return;
    }
    tail->next = newNode;
    tail = newNode; // we assigned the address 'newNode' in the 'temp->next' position
}
void deleteValue(Node *&head, int target)
{
    if (head->data == target)
    {
        head = head->next;
        return;
    }

    Node *temp = head;
    while (temp->next != NULL)
    {
        if (temp->next->data == target)
        {
            temp->next = temp->next->next;
        }
        temp = temp->next;
    }
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
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head, tail, data);
    }
    int target;
    cin >> target;
    deleteValue(head, target);
    printList(head);

    return 0;
}