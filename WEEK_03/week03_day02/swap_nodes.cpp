/*
class Solution {
public:
    int nodeSize(ListNode * head)
    {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        // if (head == NULL) return;
        int size = nodeSize(head);
        int forward = k;
        int backward = size - k;
        ListNode * temp1 = head;
        ListNode * temp2 = head;
        for (int i = 1; i < forward; i++)
        {
            temp1 = temp1->next;
        }
        for (int i = 1; i <= backward; i++)
        {
            temp2 = temp2->next;
        }
        swap(temp1->val, temp2->val);
        return head;
    }
};
*/