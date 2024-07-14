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
void min_max(Node * head) // O(N)
{
    int minData = INT_MAX;
    int maxData = INT_MIN;
    Node * temp = head;
    while (temp != NULL)
    {
        if (temp->data > maxData) maxData = temp->data;
        if (temp->data < minData) minData = temp->data;
        temp = temp->next;
    }
    cout << minData << " " << maxData;
}
int main()
{
    Node *head = NULL; // imagine of a team Leader

    while (1)
    {
        int data;
        cin >> data;
        if (data == -1) break;
        insert_at_tail(head, data);
    }
    min_max(head);

    /*why we used list instead of binary search?
    because sort + binary search needs O(NlogN) complexity
    while we're doing this at O(N) complexity*/

    return 0;
}