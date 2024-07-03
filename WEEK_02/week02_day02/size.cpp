#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int val1;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;

    int node1Size = 0;
    int node2Size = 0;
    while (true)
    {
        cin >> val1;
        if (val1 == -1)
            break;
        node1Size++;
        insert_tail(head1, tail1, val1);
    }
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        node2Size++;
        insert_tail(head2, tail2, val2);
    }
    if (node1Size == node2Size) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
