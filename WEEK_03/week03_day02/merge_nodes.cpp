/*
class Solution {
public:
    ListNode* mergeNodes(ListNode*& head) {
        if (head == NULL)
            return head;
        int sum = 0;
        ListNode* temp = head->next;
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;
        while (temp != NULL) {
            if (temp->val == 0) {
                ListNode* newNode = new ListNode(sum);
                newNode->val = sum;
                sum = 0;
                if (newHead == NULL) {
                    newHead = newNode;
                    newTail = newNode;
                    temp = temp->next;
                    continue;
                }
                newTail->next = newNode;
                newTail = newNode;
            } 
            else {
                sum = sum + temp->val;
            }
            temp = temp->next;
        }

        return newHead;
    }
};
*/