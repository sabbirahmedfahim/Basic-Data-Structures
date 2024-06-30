#include <bits/stdc++.h>
using namespace std;
class Node
{// hey, before solving the problem, I encourge you to take a look at insert_at_position.markdown
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->prev = NULL;
        this->val = val;
        this->next = NULL;
    }
};
void print_normal(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}
// void insert_at_position(Node *&head, Node *&tail, int pos, int val)
void insert_at_position(Node *head, int pos, int val)
{
    // we cannot insert at head Or tail using the function, wanna make another func to the issue
    // if (head  == NULL  && tail == NULL)
    // if (head  == NULL)
    // {
    //     Node * newNode = new Node(val);
    //     head = newNode;
    //     return;
    // }
    
    Node * temp = head;
    for (int i = 1; i <= pos-1; i++)
    {
        temp = temp->next;
    }
    Node * newNode = new Node(val);

    newNode->next = temp->next; // 100 er next e 30
    temp->next = newNode; // 20 er next e 100
    //Quiz: now where is 30? temp->next Or newNode->next ??
    newNode->next->prev = newNode; // 30 er previous 20 akon hobena, hobe 100 
    newNode->prev = temp; // 100 er previous 20

    // we can also do this
    // newNode->next = temp->next;
    // temp->next = newNode;
    // newNode->next->prev = temp->next;
    // newNode->prev = temp;

    // EXECUTE THE CODE FOR STRONG UNDERSTANDING
    // if you understand why it is possible/not possible, you're done
    // newNode->next = temp->next;
    // temp->next = newNode;
    // newNode = newNode;
    // newNode->prev = temp;
}
void print_reverse(Node * tail)
{
    Node * temp = tail;
    while (temp != NULL)
    {
        cout<< temp->val << " ";
        temp = temp->prev;
    }
    cout<<endl;
}

int main()
{
    Node * head = new Node(10);
    Node * a = new Node(20);
    Node * b = new Node(30);
    Node * c = new Node(40);
    Node * tail  = c;

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a; 
    b->next = c;
    c->prev = b;

    // insert_at_position(head, 0, 100); // can't insert at head using the func
    // insert_at_position(head, 4, 100); // can't insert at tail using the func
    insert_at_position(head, 2, 100);
    print_normal(head);
    // print_reverse(head); //NOTICE the mistake
    print_reverse(tail); 
    cout << endl;

    

    return 0;
}