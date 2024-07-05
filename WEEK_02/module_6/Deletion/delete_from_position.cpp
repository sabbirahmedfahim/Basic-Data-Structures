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
void insert_at_position(Node * &head, int pos, int val)
{
    Node* newNode = new Node(val);
    Node* temp = head;
    for (int i = 1; i <= pos-1; i++) 
    {
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;
    cout<<endl<<endl<<"Inserted at position: "<<pos<<endl<<endl;
}
void insert_at_head(Node *&head, int val)
{
    Node *newNode = new Node(val);
    newNode->next = head;
    head = newNode;
    cout<< endl <<endl<< "Inserted at head" <<endl << endl;
}
void delete_from_position(Node * head, int pos)
{
    //Notice: we're deleting index, why do we need to make newNode? 
    // Node* newNode = new Node(pos);

    Node* temp = head;
    for (int i = 1; i <= pos - 1; i++)
    {
        temp = temp->next;
    }
    // temp = temp->next; //wrong
    Node *i_will_delete_the_node  = temp->next;
    temp->next = temp->next->next;
    delete i_will_delete_the_node; //mark the location
}
void print_linked_list(Node *head)
{
    cout<<endl;
    cout << "Your Linked List: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    Node *head = NULL;
    while (1)
    {
        cout << "Option 1: Insert at tail" << endl;
        cout << "Option 2: Print Linked List" << endl;
        cout << "Option 3: Insert at any position" << endl;
        cout << "Option 4: Insert at head" << endl;
        cout << "Option 5: Delete from position" << endl;
        cout << "Option 6: Terminate" << endl;
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
            if (pos == 0)
            {
                insert_at_head(head, v);
            }
            else
            {
            insert_at_position(head, pos, v);               
            }
            
        }
        else if (op == 4)
        {
            int v;
            cout<<"Enter the value: ";
            cin>>v;
            insert_at_head(head, v);
        }     
        else if (op == 5)
        {
            int pos;
            cout<<"Enter the position: ";
            cin>>pos;
            delete_from_position(head, pos);
        }
        
        else if (op == 6)
        {
            break;
        }
        }

    return 0;
}
