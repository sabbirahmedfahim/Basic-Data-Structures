/*
class Solution {
public:
    ListNode* swapPairs(ListNode* &head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode * temp = head;
        ListNode * temp2 = head->next;
        while (temp != NULL && temp2 != NULL)
        {
            swap(temp->val, temp2->val);
            temp = temp->next->next;
            if(temp == NULL) return head; // this line is the game changer
            temp2 = temp2->next->next;
            // if(temp == NULL) return head; 
        }
        return head;
    }
};
*/