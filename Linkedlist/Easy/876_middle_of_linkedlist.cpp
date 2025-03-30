class Solution {
public:
    ListNode* middleNode(ListNode* head) {          //O(n)
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
};