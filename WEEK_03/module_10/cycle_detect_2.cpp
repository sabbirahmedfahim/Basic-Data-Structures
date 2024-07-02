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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);

    // connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = a; // ami nijer hat e cycle banaisi :)

    Node *hare = head; // AKA fast
    Node *tortoise = head; // AKA slow

    while (hare != NULL && hare->next != NULL)
    {
        // hare = hare->next; // find out the error
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (hare == tortoise)
        {
            cout << "Cycle Detected" << endl;
            break;
        }
    }

    return 0;
}