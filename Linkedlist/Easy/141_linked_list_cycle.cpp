class Solution {
public:
    bool hasCycle(ListNode *head) {         //O(n)
        ListNode *fast = head;
        ListNode *slow = head;
        while (fast!=NULL && fast->next != NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) return true;
        }
        return false;
    }
};