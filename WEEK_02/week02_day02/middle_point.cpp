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

void insert_tail(Node *&head, Node *&tail, int val) // O(1)
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
int linked_list_size(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void print_middle_point(Node *head, int x, int y, int flag)
{
    if (flag == 0)
    {
        Node *tmp = head;
        for (int i = 1; i < x ; i++)
        {
            tmp = tmp->next;
        }
        cout <<  tmp->val << " " << tmp->next->val << endl;
    }
    else
    {
        Node *tmp = head;
        for (int i = 1; i < x ; i++)
        {
            tmp = tmp->next;
        }
        cout << tmp->val << endl;
    }
    
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }
    int list_size = linked_list_size(head);

    int x = 0, y = 0;
    int flag = 0;
    if (list_size % 2 == 0)
    {
        x = list_size / 2;
        y = x + 1;
    }
    else
    {
        flag = 1;
        x = (list_size / 2) + 1;
    }

    print_middle_point(head, x, y, flag);

    return 0;
}