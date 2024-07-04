/*
class Solution {
public:
    int nodeSize(ListNode* head) {
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        return count;
    }
    ListNode* removeNthFromEnd(ListNode* &head, int n) {
        if (head == NULL)
            return head;
        ListNode* temp = head;
        int size = nodeSize(head);
        int pos = size - n;
        temp = head;
        if (pos == 0)
        {
            ListNode * deleteNode = head;
            head = head->next;
            delete deleteNode;
            return head;
        }
        for (int i = 1; i <= pos-1; i++)
        {
            temp = temp->next;
        }
        ListNode * deleteNode = temp->next;
        temp->next = temp->next->next;
        delete deleteNode;
        return head;
    }
};
*/