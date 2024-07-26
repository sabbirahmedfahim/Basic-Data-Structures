 /*
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * temp = list1;
        ListNode * temp2 = list1;
        for (int i = 1; i < a; i++)
        {
            temp = temp->next;
        }
        for (int i = 1; i <= b; i++)
        {
            temp2 = temp2->next;
        }
        while (list2 != NULL)
        {
            temp->next = list2;
            list2 = list2->next;
            temp = temp->next;
        }
        while (temp2 != NULL)
        {
            temp->next = temp2->next;
            temp = temp->next;
            temp2 = temp2->next;
        }
        return list1;
    }
};
*/