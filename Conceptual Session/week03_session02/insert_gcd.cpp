/*
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode * temp = head;
        while (temp->next != NULL)
        {
            int gcd = __gcd(temp->val, temp->next->val);
            ListNode * newNode = new ListNode(gcd);
            // temp->next = newNode;
            newNode->next = temp->next;
            temp->next = newNode;
            // temp = temp->next; // this is the most crutial line
            temp = temp->next->next; 
        }
        return head;
    }
};
*/