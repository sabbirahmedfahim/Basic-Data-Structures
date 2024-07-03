/*
class Solution {
public:
    void insert_tail(ListNode * &head, ListNode* &tail, int data)
    {
        // ListNode * newNode = new ListNode; //mistake
        ListNode * newNode = new ListNode(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        // newNode->next = tail;
        tail = newNode;
    }
    void reverse(ListNode*& head, ListNode* current) {
        if (current->next == NULL) {
            head = current;
            return;
        }
        reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode * newHead = NULL;
        ListNode * newTail = NULL;
        ListNode * temp = head;
        while (temp != NULL)
        {
            insert_tail(newHead, newTail, temp->val);
            temp = temp->next;
        }
        reverse(newHead, newHead);
        ListNode* temp1 = head;
        ListNode* temp2 = newHead;
        while (temp1 != NULL)
        {
            if(temp1->val != temp2->val)
            {
                return false;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        return true;
    }
};
*/