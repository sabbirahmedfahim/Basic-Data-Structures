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
class myStack
{
public:
    Node *head = NULL;
    // Node *tail = NULL;
    int sz = 0;
    void push(int data) // O(1)
    {
        sz++;
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            // tail = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }
    void pop() // O(1)
    {
        sz--;
        head = head->next;
    }
    int top() // O(1)
    {
        return head->data;
    }
    int size() // O(1)
    {
        return sz;
    }
    bool empty() // O(1)
    {
        if (sz == 0)
            return true;
        else
            return false;
    }
};
int main()
{
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    cout << "List Size: " << st.size() << endl << endl;
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}