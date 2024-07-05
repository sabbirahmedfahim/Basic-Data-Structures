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

void insert_at_tail(Node *&head, int vl) // * &head
{
    Node *newNode = new Node(vl);
    if (head == NULL)
    {
        head = newNode;
        // notice: used '&' as reference value, else head pointer will not changed at main func
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
}
void print_linked_list(Node *head)
{
    cout << "Your Linked List: ";
    Node *temp = head;
    // while (head != NULL) //wrong, do not change head. still I hatfa run it to notice the links of head
    // {
    //     cout << head->val;
    //     head = head->next;
    // }
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl;
}
int main()
{
    // Node * head = new Node(); //wrong
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Terminate" << endl;
        int op;
        cin >> op;
        if (op == 1)
        {
            cout << "Enter value: ";
            int v;
            cin >> v;
            insert_at_tail(head, v);
        }
        else if (op == 2)
        {
            print_linked_list(head);
        }
        else if (op == 3)
        {
            break;
        }
        }

    return 0;
}
