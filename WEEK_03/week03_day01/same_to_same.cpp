#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void insert_tail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}
void compare_lined_list(Node *head1, Node *head2, int node1, int node2)
{
    Node *tmp1 = head1;
    Node *tmp2 = head2;
    int flag = 0;
    while (tmp1 != NULL || tmp2 != NULL)
    {
        if (node1 != node2)
        {
            flag = 1;
            break;
        }
        else if (tmp1->data != tmp2->data)
        {
            flag = 1;
            break;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }
    if (flag == 0)
    cout << "YES" << endl;
    else cout<< "NO" << endl;
    
}
int main()
{
    Node *head1 = NULL;
    Node *tail1 = NULL;
    int data1;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int data2;

    int node1Size = 0;
    int node2Size = 0;
    while (true)
    {
        cin >> data1;
        if (data1 == -1)
            break;
        node1Size++;
        insert_tail(head1, tail1, data1);
    }
    while (true)
    {
        cin >> data2;
        if (data2 == -1)
            break;
        node2Size++;
        insert_tail(head2, tail2, data2);
    }
    compare_lined_list(head1, head2, node1Size, node2Size);

    return 0;
}
