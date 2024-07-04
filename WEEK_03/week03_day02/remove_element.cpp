/*
class Solution {
public:
    ListNode* removeElements(ListNode* &head, int val) {
        while (head != NULL && head->val == val)
        {
            ListNode * deleteNode = head;
            head = head->next;
            delete deleteNode;
        }
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) 
        {
            if (temp->next->val == val)
            {
                ListNode * deleteNode = temp->next;
                temp->next = temp->next->next;
                delete deleteNode;
            }
            else temp = temp->next;
        }
    
        return head;
    }
};
*/