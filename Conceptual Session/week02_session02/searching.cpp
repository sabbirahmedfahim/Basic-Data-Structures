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
void insert_at_tail(Node *&head, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode; // we assigned the address 'newNode' in the 'head' position
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode; // we assigned the address 'newNode' in the 'temp->next' position
}
int searchList(Node * head, int target) // O(N)
{
    Node * temp = head;
    while (temp != NULL)
    {
        if (temp->data == target) return true;
        temp = temp->next;
    }
    return false;
}
int main()
{
    Node *head = NULL;
 
    while (1)
    {
        int data;
        cin >> data;
        if (data == -1) break;
        insert_at_tail(head, data);
    }
    int target;
    cin >> target;
    if (searchList(head, target)) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}