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
    cout<<endl;
    Node *newNode = new Node(vl);
    if (head == NULL)
    {
        head = newNode;
        cout<<"Inserted at head"<<endl<<endl;
        // notice: used '&' as reference value, else head pointer will not changed at main func
        return;
    }
    Node *temp = head;
    while (temp->next != NULL) 
    {
        temp = temp->next;
    }
    temp->next = newNode;
    cout<<"Inserted at tail"<<endl<<endl;
}
void insert_at_position(Node * head, int pos, int val) 
//we did not used '&' before head, still works. because head remains intact.
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i <= pos-1; i++) //visualize why 'pos-1' & how it works [drawing recommended]
    {
        temp = temp->next;
    }
    // newNode = temp->next; //wrong
    newNode->next = temp->next; // if you can't draw this, you learned nothing
    temp->next = newNode;
    cout<<endl<<endl<<"Inserted at position: "<<pos<<endl<<endl;
}
void print_linked_list(Node *head)
{
    cout<<endl;
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
    cout<<endl<<endl;
}
int main()
{
    // Node * head = new Node(); //wrong
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Terminate" << endl;
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
            int pos, v;
            cout<<"Enter Position: ";
            cin>>pos;
            cout<<"Enter Value: ";
            cin>>v;
            insert_at_position(head, pos, v);
        }
        else if (op == 4)
        {
            break;
        }
        }

    return 0;
}
