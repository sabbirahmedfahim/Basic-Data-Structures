// My solution [accepted]
/*
class Solution {
public:
    int sizeList(ListNode * head)
    {
        int count = 0;
        while (head != NULL)
        {
            count++;
            head = head->next;
        }
        return count;
    }
    int getDecimalValue(ListNode* head) {
        int sz = sizeList(head);
        sz--;
        int ans = 0;
        ListNode * temp = head;
        while (temp != 0)
        {
            if (temp->val == 1)
            {
                ans = ans + pow(2, sz);
            }
            sz--; 
            temp = temp->next;
        }
        return ans;
    }
};
*/

// Instructors solution
/*
class Solution {
public:
    int size(ListNode* head)
    {
        ListNode* temp = head;
        int cnt=0;
        while(temp!=NULL)
        {
            cnt++;
            temp = temp->next;
        }
        return cnt;
    }
    int getDecimalValue(ListNode* head) {
        int sz = size(head);
        int x = pow(2,sz-1);
        int ans = 0;
        for(ListNode* temp = head; temp!=NULL; temp=temp->next)
        {
            if(temp->val == 1)
            {
                ans+=x;
            }
            x/=2;
        }
        return ans;
    }
};
*/