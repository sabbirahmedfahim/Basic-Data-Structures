#include <bits/stdc++.h>
#define ll long long
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

void insert_at_head(Node *&head, int data) // O(1)
{
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}
void insert_at_tail(Node *&head, int val) // O(n)
{
    Node *newNode = new Node(val);
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
}
void insert_at_position(Node * &head, int pos, int val) // O(pos)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i <= pos-1; i++) //visualize why 'pos-1' & how it works [drawing recommended]
    {
        temp = temp->next;
    }
    newNode->next = temp->next; // if you can't draw this, you learned nothing
    temp->next = newNode;
}
void delete_from_position(Node *head, int pos) // O(pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            return;
        }
    }
    if (temp->next == NULL)
    {
        return;
    }
    Node *nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}
void delete_head(Node *&head) // O(1)
{
    if (head == NULL)
    {
        return;
    }
    Node *deleteNode = head;
    head = head->next;
    delete deleteNode;
}
void print_linked_list(Node *head) // O(n)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int t;
    cin>>t;
    Node *head = NULL;

    while (t--)
    {
        int query;
        cin >> query;
        if (query == 0)
        {
            ll v;
            cin >> v;
            insert_at_head(head, v);
        }
        else if (query == 1)
        {
            ll v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (query == 2)
        {            
            ll pos;
            cin >> pos;
            if (pos == 0)
            {
                delete_head(head);
            }
            else if (head == NULL)
            {
                ;
            }
            else
            {
                delete_from_position(head, pos);
            }
        }
        else if (query == 3)  
        {
            ll pos, v;
            cin >> pos >> v;
            insert_at_position(head, pos, v);
        }
        else if (query == 4)  
        {
            ll pos;
            cin >> pos;
            delete_from_position(head, pos);
        }
    }

    print_linked_list(head);

    return 0;
}