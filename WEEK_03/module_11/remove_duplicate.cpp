/*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode * temp = head;
        while (temp != NULL && temp->next != NULL)
        {
            if (temp->val == temp->next->val)
            {
                ListNode* deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else 
            temp = temp->next;
        }
        return head;
    }
};
*/
