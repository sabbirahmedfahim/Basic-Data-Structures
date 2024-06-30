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
void insert_tail(Node *&head, Node *&tail, int val)
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

void is_duplicate(Node *head, int nodeSize)
{
    vector<int> freq(100);
    for (int i = 0; i < 101; i++)
    {
        freq[i] = 0;
    }
    vector<int> a(nodeSize);
    Node *temp = head;
    int j = 0;
    while (temp != NULL)
    {
        a[j] = temp->val;
        j++;
        temp = temp->next;
    }
    int flag = 0;
    for (int i = 0; i < nodeSize; i++)
    {
        int val = a[i];
        freq[val]++;   
        if (freq[val] == 2)
        {
            flag = 1;
            cout<<"YES"<<endl;
            break;
        }
           
    }
    if (flag == 0)
    {
        cout<<"NO"<<endl;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    int nodeSize = 0;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        nodeSize++;
        insert_tail(head, tail, val);
    }
    is_duplicate(head, nodeSize);
    // print_linked_list(head);

    return 0;
}