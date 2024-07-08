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
class myQueue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    int sz = 0;
    void push(int data)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = head;
        head = head->next;
        delete deleteNode;
        if (head == NULL) // visual representation needed
        {
            tail = NULL;
        }
    }
    int front()
    {
        return head->data;
    }
    int size()
    {
        return sz;
    }
    bool empty()
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myQueue q;
    q.push(10);
    cout << q.front() << endl;
    q.push(20);
    cout << q.front() << endl;
    q.push(30);
    cout << q.front() << endl << endl;

    q.pop();
    cout << q.front() << endl;
    q.pop();
    cout << q.front() << endl << endl;

    q.pop(); // why it shows segmentation fault?
    cout << q.front() << endl; 

    return 0;
}