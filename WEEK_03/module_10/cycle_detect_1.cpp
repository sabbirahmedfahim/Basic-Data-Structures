#include <bits/stdc++.h>
using namespace std;
class Node
{ // goto : cycle_detect_2.cpp for solution
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

    Node *hare = head;
    Node *tortoise = head;
    // while (hare != tortoise && hare->next != tortoise) // wrong
    while (hare != NULL && hare->next != NULL) // O(N)
    {
        // if (hare != NULL && hare->next != NULL) // wrong

        // wrong also : at first start the race !! 
        if (hare == tortoise)
        {
            cout << "Cycle Detected" << endl;
            break;
        }
    }

    return 0;
}