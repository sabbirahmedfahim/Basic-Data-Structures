/*
class Solution
{
public:
    int size = 0;
    void node_size(ListNode *head)
    {
        ListNode *temp = head;
        while (temp != NULL)
        {
            size++;
            temp = temp->next;
        }
    }
    ListNode *middleNode(ListNode *head)
    {
        node_size(head);
        ListNode *temp = head;
        for (int i = 1; i <= size / 2; i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};
*/
