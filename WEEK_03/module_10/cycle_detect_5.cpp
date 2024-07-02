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
    c->next = NULL;


    Node *hare = head;     // AKA fast
    Node *tortoise = head; // AKA slow

    bool flag = false;
    // while (hare != NULL && hare->next != NULL)
    while (hare->next != NULL && hare != NULL) // new lesson
    // interesting, it will not work
    {
        tortoise = tortoise->next;
        hare = hare->next->next;
        if (hare == tortoise)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "Cycle Detected" << endl;
    }
    else cout << "No Cycle" << endl;
    
    

    return 0;
}