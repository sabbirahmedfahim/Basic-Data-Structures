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
// to calculate linked list size at O(1)
int sz = 0; // global variable
void insert_at_tail(Node *&head, int data)
{
    sz++;
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {   
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->prev = temp;
}
void insert_at_head(Node * &head, int data)
{
    sz++;
    Node * newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}
int sizeList(Node *head) // O(N)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}
void printList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl << endl;
}
int main()
{
    Node *head = NULL;

    while (1)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_at_tail(head, data);
    }
    printList(head);
    while (1)
    {
        int data;
        cin >> data;
        if (data == -1)
            break;
        insert_at_head(head, data);
        printList(head);
    }

    cout << endl << sizeList(head); // O(N)
    cout << endl << sz; // O(1)

    return 0;
}