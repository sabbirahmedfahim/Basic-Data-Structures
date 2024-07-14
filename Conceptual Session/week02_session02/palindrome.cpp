#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insert_at_tail(Node *&head, Node * &tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode; // we assigned the address 'newNode' in the 'head' position
        tail = newNode; // we assigned the address 'newNode' in the 'tail' position
        return;
    }
    tail->next = newNode;
    tail = newNode; // we assigned the address 'newNode' in the 'tail' position
}
void is_palindrome(Node * head) 
{
    Node * temp = head;
    vector <int> v;
    while (temp != NULL)
    {
        v.push_back(temp->data);
        temp = temp->next;
    }
    vector <int> v2(v);
    reverse(v2.begin(), v2.end());
    if (v == v2) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
 
    while (1)
    {
        int data;
        cin >> data;
        if (data == -1) break;
        insert_at_tail(head, tail, data);
    }

    is_palindrome(head);

    return 0;
}