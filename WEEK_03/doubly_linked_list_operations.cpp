#include <bits/stdc++.h>
#define nl '\n'
#define ll long long int
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

void insert_at_head(Node *&head, Node *&tail, int data) // O(1)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode; tail = newNode;
        return;
    }

    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insert_at_tail(Node *&head, Node* &tail, int val) // O(1)
{
    Node *newNode = new Node(val);
    // Node * temp = tail;
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode; // We took reference (&) just because for this line, imagine why
}

void delete_head(Node* &head, Node* &tail) // O(1)
{
    if(head->next == NULL)
    {
        head = NULL; tail = NULL; return;
    }
    Node * deleteNode = head;
    head = head->next;
    head->prev = NULL;
    delete deleteNode;
}

void delete_tail(Node* &head, Node * &tail) // O(1)
{
    if(tail->prev == NULL)
    {
        head = NULL; tail = NULL; return;
    }
    Node * deleteNode = tail;
    tail = tail->prev;
    tail->next = NULL;
    delete deleteNode;
}

void delete_by_value(Node * &head, Node * &tail, int data) // O(n)
{
    if(head == NULL) return;
    else if(head->data == data) delete_head(head, tail);
    else
    {
        Node * tmp = head;
        while (tmp != NULL)
        {
            if(tmp->data == data)
            {
                if(tmp->next == NULL)
                {
                    delete_tail(head, tail);
                }
                else
                {
                    tmp->prev->next = tmp->next;
                    tmp->next->prev = tmp->prev;
                }
                return;
            }
            tmp = tmp->next;
        }
    }
}

void delete_at_position(Node *head, int pos) // O(pos)
{
    Node *temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    Node *deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;
}

void print_list(Node * head) // O(n)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << nl;
}

int linked_list_size(Node *head) // O(n)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);

    Node * head = NULL; Node * tail = NULL;
    int n; cin >> n;
    while (n--)
    {
        string cmd; cin >> cmd;
        if(cmd == "insert")
        {
            ll data; cin >> data;
            insert_at_head(head, tail, data);
        }
        else if(cmd == "delete")
        {
            ll data; cin >> data;
            delete_by_value(head, tail, data);
        }
        else if(cmd == "deleteFirst")
        {
            if(head != NULL) delete_head(head, tail);
        }
        else
        {
            if(tail != NULL) delete_tail(head, tail);
        }
    }
    print_list(head);

    return 0;
}
