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
class myStack
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
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop()
    {
        sz--;
        Node *deleteNode = tail;
        tail = tail->prev;
        if (tail == NULL)
        {
            head = NULL;
        }
        // else tail = NULL; // mistake
        else
            tail->next = NULL;
        delete deleteNode;
    }
    int top()
    {
        return tail->data;
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
    myStack st_1;
    myStack st_2;
    int n, m;
    cin >> n;
    int temp1 = n;
    while (temp1--)
    {
        int data;
        cin >> data;
        st_1.push(data);
    }
    cin >> m;
    int temp2 = m;
    while (temp2--)
    {
        int data;
        cin >> data;
        st_2.push(data);
    }
    if (n != m)
    {
        cout << "NO" << endl;
    }
    else
    {
        bool flag = false;
        while (!st_1.empty())
        {
            if (st_1.top() != st_2.top())
            {
                flag = true;
                break;
            }
            st_1.pop();
            st_2.pop();
        }
        if (flag==true)
        {
            cout << "NO" << endl;
        }
        else cout << "YES" << endl;
    }

    return 0;
}