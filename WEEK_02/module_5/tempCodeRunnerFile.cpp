#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    
    // Not printing anything because the next of head is NULL; I did not link the nodes
    // while (head->next != NULL) {
    //     cout << head->val << endl;
    //     head = head->next;
    // }

    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // Manual way to print the linked list
    cout << head->val << endl;
    cout << head->next->val << endl;
    cout << head->next->next->val << endl;
    cout << head->next->next->next->val << endl;
    cout << head->next->next->next->next->val << endl << endl;

    Node *temp = head; // Declared to maintain the original head pointer (Look at the output)

    // Printing using a loop
    // Why is the last element not printed? Think!
    while (head->next != NULL) {
        cout << head->val << endl;
        head = head->next;
    }
    cout << endl;

    // Why is only 50 printed instead of all together? Notice the difference
    while (head != NULL) {
        cout << head->val << endl;
        head = head->next;
    }
    cout << endl;

    // Why was the last element not printed? (Fixed)
    // Lesson: Do not change the head pointer!
    while (temp != NULL) {
        cout << temp->val << endl;
        temp = temp->next;
    }
    
    return 0;
}
